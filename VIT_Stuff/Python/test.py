import logging
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.common.exceptions import TimeoutException, NoSuchElementException
import random
import time

# Set up logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

def automate_form(form_url, max_pages=10):
    logger.info(f"Starting form automation for URL: {form_url}")
    driver = webdriver.Chrome()  # Make sure you have ChromeDriver installed
    driver.get(form_url)
    
    page_count = 0
    while page_count < max_pages:
        try:
            logger.info(f"Processing page {page_count + 1}")
            # Wait for the form to load
            WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.CSS_SELECTOR, "form")))
            
            # Find all question containers
            questions = driver.find_elements(By.CSS_SELECTOR, ".freebirdFormviewerViewItemsItemItem")
            logger.info(f"Found {len(questions)} questions on this page")
            
            for i, question in enumerate(questions, 1):
                try:
                    input_type = identify_input_type(question)
                    logger.info(f"Question {i}: Identified as {input_type}")
                    
                    if input_type == "radio":
                        options = question.find_elements(By.CSS_SELECTOR, "label")
                        choice = random.choice(options)
                        choice.click()
                        logger.info(f"Question {i}: Selected radio option - {choice.text}")
                    elif input_type == "checkbox":
                        options = question.find_elements(By.CSS_SELECTOR, "label")
                        selected = random.sample(options, random.randint(1, len(options)))
                        for option in selected:
                            option.click()
                        logger.info(f"Question {i}: Selected {len(selected)} checkbox options")
                    elif input_type == "text":
                        logger.info(f"Question {i}: Skipping text input as requested")
                    else:
                        logger.warning(f"Question {i}: Unhandled input type - {input_type}")
                except NoSuchElementException:
                    logger.error(f"Failed to interact with question {i}. Skipping...")
                    continue

            # Try to find and click the 'Next' button
            try:
                next_button = WebDriverWait(driver, 5).until(
                    EC.element_to_be_clickable((By.CSS_SELECTOR, "div[role='button'][data-value='NEXT']"))
                )
                next_button.click()
                page_count += 1
                logger.info(f"Moved to next page. Total pages processed: {page_count}")
                time.sleep(2)  # Wait for the next page to load
            except TimeoutException:
                # If there's no 'Next' button, assume it's the last page and submit
                submit_button = WebDriverWait(driver, 5).until(
                    EC.element_to_be_clickable((By.CSS_SELECTOR, "div[role='button'][data-value='SUBMIT']"))
                )
                submit_button.click()
                logger.info("Form submitted successfully!")
                break

        except Exception as e:
            logger.error(f"An error occurred: {str(e)}")
            break

    # Wait for submission confirmation and close the browser
    time.sleep(5)
    driver.quit()
    logger.info("Form automation completed. Browser closed.")

def identify_input_type(question):
    if question.find_elements(By.CSS_SELECTOR, "input[type='radio']"):
        return "radio"
    elif question.find_elements(By.CSS_SELECTOR, "input[type='checkbox']"):
        return "checkbox"
    elif question.find_elements(By.CSS_SELECTOR, "input[type='text']"):
        return "text"
    # Add more input type identifications as needed
    return "unknown"

# Usage
form_url = "https://docs.google.com/forms/d/e/1FAIpQLSe1ZIzIGEXjVGGc9x2GrxnUxmnulXAwrNnP7w9bPK8LBSsVYA/viewform"
automate_form(form_url)
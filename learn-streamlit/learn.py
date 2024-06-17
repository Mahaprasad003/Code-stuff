import streamlit as st

st.title("Simple Calculator App")

# Get user input
number1 = st.number_input("Enter the first number")
number2 = st.number_input("Enter the second number")

# Define a function for calculation
def calculate(operation):
    if operation == "Add":
        result = number1 + number2
    elif operation == "Subtract":
        result = number1 - number2
    elif operation == "Multiply":
        result = number1 * number2
    elif operation == "Divide":
        if number2 == 0:
            st.warning("Cannot divide by zero")
        else:
            result = number1 / number2
    else:
        st.warning("Invalid operation")
    return result

# Select operation
operation = st.selectbox("Select an operation", ["Add", "Subtract", "Multiply", "Divide"])

if st.button("Calculate"):
    result = calculate(operation)
    st.success(f"The result is: {result}")

import customtkinter as ct
import tkinter as tk
from tkinter import messagebox

class MyGUI:
    def __init__(self):
        ct.set_appearance_mode("dark")
        ct.set_default_color_theme("green")
        self.root = ct.CTk()

        self.label = ct.CTkLabel(self.root, text="Your Message here", text_font=("Arial", 18))
        self.label.pack(padx=10,pady=10)
        

        self.textbox = tk.Text(self.root, font=("Arial", 16), height=1, width=10)
        self.textbox.pack(padx=10, pady=10)

        self.check_state = tk.IntVar()

        self.check = ct.CTkCheckBox(self.root, text="Show Messagebox", text_font=("Arial", 16), variable=self.check_state)
        self.check.pack(padx=10, pady=10)

        self.button = ct.CTkButton(self.root, text = "Show Message", text_font=("Arial", 18), command=self.show_message, corner_radius=10)
        self.button.pack(padx=10, pady=10)

        self.root.mainloop()
    
    def show_message(self):
        if self.check_state.get() == 0:
            text = self.textbox.get('0.0', "end")
            print(text)
        else:
            text = self.textbox.get('0.0', "end")
            messagebox.showinfo(title="Message", message=text)

MyGUI()

        



        
import customtkinter as ct
import tkinter as tk
from tkcalendar import Calendar, DateEntry

ct.set_appearance_mode("System")
ct.set_default_color_theme("green")

app = ct.CTk()
app.geometry("800x600")

label = ct.CTkLabel(app, text="Hey there!", text_font="Arial")
label.pack()

cal = DateEntry(app, width = 16, background = "magenta3", foreground = "white")
cal.pack(padx = 20, pady = 20)
app.mainloop()
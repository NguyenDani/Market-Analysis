import tkinter as tk
from tkinter import messagebox

# Function to handle button click event
def analyze_data():
    messagebox.showinfo("Analysis", "Data analysis is in progress...")

# Create the main application window
root = tk.Tk()
root.title("Market Data Analysis Tool")

# Create and configure the main frame
main_frame = tk.Frame(root, padx=20, pady=20)
main_frame.pack()

# Create a label
label = tk.Label(main_frame, text="Welcome to Market Data Analysis Tool", font=("Arial", 16))
label.pack()

# Create a button to trigger analysis
analyze_button = tk.Button(main_frame, text="Analyze Data", command=analyze_data)
analyze_button.pack(pady=10)

# Run the application
root.mainloop()

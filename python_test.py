import tkinter as tk

# 1. Define the action to take when the button is clicked
def on_button_click():
    # Update the text of the label dynamically
    label.config(text="Button Clicked!")
    print("The button was clicked in the GUI!")  # Prints to your terminal

# 2. Create the main window
root = tk.Tk()
root.title("Click Event Example")
root.geometry("300x200")

# 3. Add a label
label = tk.Label(root, text="Click the button below:", font=("Arial", 14))
label.pack(pady=20)

# 4. Add the button and link it to the function using 'command'
button = tk.Button(
    root, 
    text="Click Me", 
    command=on_button_click, 
    bg="#4CAF50",      # Green background color
    fg="white",        # White text color
    font=("Arial", 12, "bold")
)
button.pack(pady=10)

# 5. Start the event loop
root.mainloop()

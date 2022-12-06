import tkinter as tk
from tkinter import ttk
from tkinter import * 
from datetime import datetime
import requests 



# this is the function called when the button is clicked
def btnGetBlockHeight():
    print("Calling blockchain API")
    api_url = "https://blockchain.info/latestblock"
    response = requests.get(api_url)
    if response.status_code == 200:
        response_json = response.json()
        var.set( response_json['height'])


root = Tk()

var = StringVar()

# This is the section of code which creates the main window
root.geometry('883x575')
root.configure(background='#F0F8FF')
root.title('BlockChainExplorar')


# This is the section of code which creates a button
Button(root, text='Get Total Number of Blocks', bg='#F0F8FF', font=('arial', 12, 'normal'), command=btnGetBlockHeight).place(x=15, y=49)


# This is the section of code which creates the a label
Label(root, textvariable = var, bg='#F0F8FF', font=('arial', 12, 'normal')).place(x=250, y=56)


root.mainloop()

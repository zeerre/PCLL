#!/usr/bin/python3
#########################################################################
# File Name: 1.py
# Author:stevenzdg988
# mail:steven_zdg988@sina.com
# Created And Modified Time: ====2023-06-20  21-22-12====
#########################################################################

from tkinter import *
from tkinter import ttk
root = Tk()
frm = ttk.Frame(root, padding=10)
frm.grid()
ttk.Label(frm, text="Hello World!").grid(column=0, row=0)
ttk.Button(frm, text="Quit", command=root.destroy).grid(column=1, row=0)
root.mainloop()
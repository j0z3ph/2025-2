import tkinter as tk
from PIL import ImageTk, Image
import tkinter.messagebox as msg

def pushado(event):
    msg.showerror("ERROR", entrada.get())

def maspushado():
    msg.showwarning("Warning", entrada.get() + " x2")

ventana = tk.Tk()

imagen = ImageTk.PhotoImage(Image.open("hasbula.jpeg"))

ventana.wm_title("Ventana")
ventana.wm_minsize(650,500)
#ventana.wm_maxsize(500,500)

etiqueta = tk.Label(ventana, image=imagen, foreground="red")
etiqueta.grid(row=0, column=0)

entrada = tk.Entry(ventana, width=40, justify="center")
entrada.grid(row=0, column=1)

boton = tk.Button(ventana, text="Soy un boton")
boton.bind('<Button-1>', pushado)
boton.grid(row=1, column=0)

boton2 = tk.Button(ventana, text="Soy un boton x2", command=maspushado)
boton2.grid(row=1, column=1)

ventana.mainloop()
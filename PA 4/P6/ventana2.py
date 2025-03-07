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
etiqueta.place(x=20, y=20)

entrada = tk.Entry(ventana, width=40, justify="center")
entrada.place(x= 265, y=130)

boton = tk.Button(ventana, text="Soy un boton")
boton.bind('<Button-1>', pushado)
boton.place(x=80, y=265)

boton2 = tk.Button(ventana, text="Soy un boton x2", command=maspushado)
boton2.place(x=70, y=300)

ventana.mainloop()
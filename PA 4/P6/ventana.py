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
ventana.wm_minsize(500,500)
#ventana.wm_maxsize(500,500)

etiqueta = tk.Label(ventana, image=imagen, foreground="red")
etiqueta.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)

entrada = tk.Entry(ventana, width=40, justify="center")
entrada.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)

boton = tk.Button(ventana, text="Soy un boton")
boton.bind('<Button-1>', pushado)
boton.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)

boton2 = tk.Button(ventana, text="Soy un boton x2", command=maspushado)
boton2.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)

ventana.mainloop()
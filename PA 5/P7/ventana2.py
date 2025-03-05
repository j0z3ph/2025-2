import tkinter as tk
from PIL import ImageTk, Image
import tkinter.messagebox as msgbox


def on_click2():
    msgbox.showinfo("Mensajito", entrada.get() + " x2")


def on_click(event):
    msgbox.showerror("Error", entrada.get())


ventana = tk.Tk()
capipotter = ImageTk.PhotoImage(Image.open("capipotter.jpg"))
ventana.wm_minsize(600, 600)
etiqueta = tk.Label(ventana, text="Esto es una etiqueta.", image=capipotter)
etiqueta.place(x=10,y=10)
entrada = tk.Entry(ventana, width=41, justify="center")
entrada.place(x=9,y=520)
boton = tk.Button(ventana, text="Puchea me", height=16, width=19)
boton.place(x=390, y=10)
boton2 = tk.Button(ventana, text="Puchea me x2", command=on_click2, height=16, width=19)
boton2.place(x=390, y=280)
boton.bind("<Button-1>", on_click)
ventana.wm_title("Titulo")
ventana.mainloop()

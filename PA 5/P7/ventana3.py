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
etiqueta.grid(row=0, column=0)
entrada = tk.Entry(ventana, width=41, justify="center")
entrada.grid(row=0, column=1, sticky='s')
boton = tk.Button(ventana, text="Puchea me", width=19)
boton.grid(row=1, column=0)
boton2 = tk.Button(ventana, text="Puchea me x2", command=on_click2, width=19)
boton2.grid(row=1, column=1)
boton.bind("<Button-1>", on_click)
ventana.wm_title("Titulo")
ventana.mainloop()

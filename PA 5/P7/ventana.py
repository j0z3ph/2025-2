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
etiqueta.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)
entrada = tk.Entry(ventana, width=50, justify="center")
entrada.pack(fill=tk.BOTH, side=tk.LEFT, expand=True)
boton = tk.Button(ventana, text="Puchea me")
boton.pack(fill=tk.BOTH, side=tk.BOTTOM, expand=True)
boton2 = tk.Button(ventana, text="Puchea me x2", command=on_click2)
boton2.pack(fill=tk.BOTH, side=tk.BOTTOM, expand=True)
boton.bind("<Button-1>", on_click)
ventana.wm_title("Titulo")
ventana.mainloop()

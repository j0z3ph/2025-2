import tkinter as tk

ventana = tk.Tk()

ventana.wm_title("Ventana")
ventana.wm_minsize(500,500)
ventana.wm_maxsize(500,500)

etiqueta = tk.Label(ventana, text="Esto es una etiqueta", foreground="red")
etiqueta.pack()

boton = tk.Button(ventana, text="Soy un boton")
boton.pack()

ventana.mainloop()
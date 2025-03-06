from mis_clases import Cuadrado
    
if __name__ == "__main__":
    lista = []
    try:
        cuadrado = Cuadrado(5)
        lista.append(cuadrado)
        ticket = open("ticket.txt", "tw")
        ticket.write("Esto es un ticket :D")
        ticket.close()
        cuadrado.lado = 10
        print(cuadrado.lado)
    except:
        print("Upssss")
    
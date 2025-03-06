from mis_clases import Cuadrado

if __name__ == "__main__":
    try:
        fig = Cuadrado(5)
        fig.lado = -10
        print(fig.lado)
    except:
        print("Upsss")
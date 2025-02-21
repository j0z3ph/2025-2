import biblioteca as b

if __name__ == "__main__":
    try:
        lista = [1,2,3]
        raise Exception("JAJA")
        print(lista[3])
        print(5/0)
    except ZeroDivisionError:
        print("Syntax error")
    except IndexError:
        print("No seas tonoto >:c")
    except:
        print("Aprende a programar 🤬")
    finally:
        print("Adios")
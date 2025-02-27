from abc import ABCMeta
from abc import abstractmethod

class Figura(metaclass=ABCMeta):
    @abstractmethod
    def area(self):
        pass

class Triangulo(Figura):
    def __init__(self, base: float, altura: float):
        self.__base = base
        self.__altura = altura
    
    @property
    def altura(self):
        return self.__altura
    
    @property
    def base(self):
        return self.__base
    
    def area(self):
        return 0


class Rectangulo(Figura):
    def __init__(self, base: float, altura: float):
        if base < 0 or altura < 0 : raise Exception("No se pertmiten valores negativos")
        
        self.__base = base
        self.__altura = altura
    
    @property
    def altura(self):
        return self.__altura
    
    @property
    def base(self):
        return self.__base
    
    def area(self):
        return self.__base * self.__altura
  
  
if __name__ == "__main__":  
    try:
        rect1 = Rectangulo(-5,6)
        print(rect1.area())
    except:
        print("Valor no validos")
    t = Triangulo(5,6)
    print(t.area())
from abc import ABCMeta, abstractmethod

class Figura(metaclass=ABCMeta):
    def __init__(self, base:int, altura:int):
        self._base = base
        self._altura = altura
     
    @abstractmethod   
    def area(self) -> float:
        pass

class Cuadrado(Figura):
    def __init__(self, lado:int):
        if lado < 1:
            raise Exception("No seas tonto")
        super().__init__(lado, lado)
        self._altura = lado
        self._base = lado
    def area(self)-> float:
        return self._base * self._altura
    
    @property
    def lado(self):
        return self._base
    @lado.setter
    def lado(self, lado:int):
        self._base = lado
        self._altura = lado

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
            raise Exception("No seas tonoto")
        super().__init__(lado, lado)
        self._altura = lado
        self._base = lado
    
    @property
    def lado(self):
        return self._base

    @lado.setter    
    def lado(self, lado):
        self._altura = lado
        self._base = lado
    
    def area(self):
        return self._base * self._altura
    

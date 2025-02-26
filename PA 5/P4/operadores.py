
class Punto:
    def __init__(self, x:float , y: float):
        self.__x = x
        self.__y = y
    
    def __str__(self):
        return f"({self.__x}, {self.__y})"
    
    def __add__(self, other):
        p = Punto(self.__x - other.x, self.__y - other.y)
        return p
    
    @property
    def x(self):
        return self.__x 

    @x.setter
    def x(self, x:float):
        self.__x = x
        
    @property
    def y(self):
        return self.__y 

    @y.setter
    def y(self, y:float):
        self.__y = y
        

p1 = Punto(3,4)
p2 = Punto(5,6)

print(p1 + p2)
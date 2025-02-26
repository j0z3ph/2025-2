class Clase:
    def __init__(self, v1, v2):
        self.__variable1 = v1
        self.__variable2 = v2
       
    @property
    def variable1(self):
        return self.__variable1
    
    @variable1.setter 
    def variable1(self, v1):
        self.__variable1 = v1
        
    @property
    def variable2(self):
        return self.__variable2
    
    @variable2.setter 
    def variable2(self, v2):
        self.__variable2 = v2
    
class Clase_Hija(Clase):
    pass
    
objeto = Clase(1,2)
objeto.variable1 = 3
print(objeto.variable1)

objeto2 = Clase_Hija(4,5)
print(objeto2.variable2)        
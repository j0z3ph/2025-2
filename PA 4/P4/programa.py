class Alumno:
    
    def __init__(self, nombre: str, boleta: str, edad: int):
        self.__nombre = nombre
        self.__boleta = boleta
        self.__edad = edad
        
    @property
    def nombre(self):
        return self.__nombre
    
    @nombre.setter
    def nombre(self, nombre:str):
        self.__nombre = nombre
    
    def __str__(self):
        return f"Holi, mi nombre es {self.__nombre}, mi boleta es {self.__boleta} y tengo {self.__edad} años"
    
    def metodo_de_instancia(self):
        pass
    
    @classmethod
    def metodod_de_clase(cls):
        pass
    
    @staticmethod
    def metodo_estatico():
        pass
    

objeto = Alumno("Hector", "234234234", 19)
objeto.nombre="Rotceh"
objeto._Alumno__nombre = "5"
print(objeto.nombre)


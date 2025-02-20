
class Alumno:

    def __init__(self, nombre: str, boleta: str, es_regular: bool):
        self.__nombre = nombre
        self.__boleta = boleta
        self.__regular = es_regular
        
    def metodo_de_instancia(self):
        print("Soy un metodo de instancia")
       
    @classmethod 
    def metodo_de_clase(cls):
        print("Soy un metodo de clase")
    
    @staticmethod
    def metodo_estatico():
        print("Soy unmetodo estatico")
    
    def __str__(self):
        string = "Hola, mi nombre es " + self.__nombre + "\nMi boleta es " + self.__boleta + '\n'
        if self.__regular:
            string += "Y soy regular jaja tontos"
        else:
            string += "y ya"
        return string
    

alumno1 = Alumno("Kevin Antonio", "PE8716238712873", False)
#alumno1.nombre = "Kevin Antonio"
#alumno1.boleta = "87128763217638712874678123"
#alumno1.regular = True
print(alumno1)

#alumno1.metodo_de_instancia()
#Alumno.metodo_de_clase()
#Alumno.metodo_estatico()

alumno1._Alumno__nombre = "Guillermo"
print(alumno1)



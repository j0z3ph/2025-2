from multimethod import multimethod

class A:
    def metodo(self):
        print("A")
    
class B:
    def metodo(self):
        print("B")

class C:
    def metodo(self):
        print("C")
    
class D(A,B,C):
    
    @multimethod
    def imprime(self, mensaje:str): #Es necesario especificar el tipo de dato de los parametros
        print(mensaje)
        
    @multimethod
    def imprime(self):
        print("Holi")

instancia = D()

instancia.imprime()

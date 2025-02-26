class A:
    def metodo(self):
        print("Clase A")

class B:
    def metodo(self):
        print("Clase B")
        
class C:
    def metodo(self):
        print("Clase C")
        
class D(C,B,A):
    def metodo(self):
        print("Clase D")

instancia = D()
instancia.metodo()
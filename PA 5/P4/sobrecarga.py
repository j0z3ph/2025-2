from multimethod import multimethod
class A:
    @multimethod
    def metodo(self):
        print("Nada")
        
    @multimethod
    def metodo(self, mensaje:str):
        print(mensaje)
        
instancia = A()
instancia.metodo("Holi")
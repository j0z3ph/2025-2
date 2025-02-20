import math as m
from math import sqrt, sin

variable_global = 4

def funcion():
    global variable_global
    variable_global = 1
    variable_local = 5
    print(variable_global)
    def funcion2():
        nonlocal variable_local
        variable_local = 0
        print(variable_local)
        
    funcion2()
    print(variable_local)
   
if __name__ == "__main__":
    print(variable_global)
    funcion()
    print(variable_global)




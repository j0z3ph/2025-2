
import math as m
import numpy as np
from math import sqrt, log

lasuma = lambda a,b : a+b

def suma(*valores):
    sum = 0
    for val in valores:
        sum += val
    return sum    


def divide(dividendo: float, divisor: float) -> float:
    """Divide dos numeros

    Args:
        dividendo (float): El de adentro
        divisor (float): El de afuera

    Returns:
        float: La division
    """
    return dividendo / divisor


#num1 = float(input("Numero 1: "))
#num2 = float(input("Numero 2: "))
print(lasuma(3,5))
print(sum((1,2,3,4,5)))
print(divide(5.6,7.0))
print(f"La suma es {suma(1,2,3,4,5,6,7,8,9)}")

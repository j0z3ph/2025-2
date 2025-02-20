
def funcion():
    print("Soy una funcion")
    
def suma(a:int , b:int = 0) -> float:
    """Suma dos numero

    Args:
        a (int): El primer numero
        b (int): El segundo numero

    Returns:
        float: La suma
    """
    return a + b
    
    
def funcion(primer, segundo, tercer):
    print(primer + segundo + tercer)
    
def LaSuma(*valores):
    res = 0
    for i in valores:
        res += i
    return res

sumachafa = lambda a, b: a+b

print(sumachafa(1,2))


print(LaSuma(1,2,3,4,5,6,7,8,9))
#funcion("tres", "uno",  "dos")    
#c = 6
#d = "A"
#print(suma(b=c, a=d))
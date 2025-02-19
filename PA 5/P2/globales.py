
variable = 8

def funcion():
    global variable
    variable = 6
    print(variable)
    
def otrafuncion():
    helaman = 8
    print(helaman)
    def funcioninterna():
        nonlocal helaman
        helaman = 7
        print(helaman)
    funcioninterna()
    print(helaman)

if __name__ == "__main__":
    otrafuncion()
    print(variable)
try:
    arr = [1,2,3]
    #raise Exception("EL ERRORRRRRR")
    print(arr[5])
except ZeroDivisionError:
    print("No seas tonoto >:c")
except IndexError:
    print("No seas tonoto x2 >:c")
finally:
    print("Adios")

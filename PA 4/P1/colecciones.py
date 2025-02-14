lista = [1,2,0,"Hola", True, None, 5.6, 0x12, 0b10011]
lista[0] = "Algo"
lista[5] = "Algo"
print(lista[-1])



tupla = (1 ,2 ,3 ,5, 'Algo', True, 0x12)
#tupla[5] = 'Algo'
print(tupla)

larousse = { 'algo': None, True: False, 4: -1, None: 'Algo', 'algo': 'Nada' }
larousse[True] = True
print(larousse)

conjunto = {1,1,1,1,1,'Cualquier cosa'}
print(type(conjunto))

a = int(input("Usuario, ingrese un valor: "))
b = int(input("Gracias, ahora ingresa otro: "))

print("La suma de {1} mas {0:^20.5f} es: {2}".format(a,b,a+b))

print("Hola".upper())
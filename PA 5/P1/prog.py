# prog.py
'''
kjhfkjhsdf
jsdfjhajsdf
jhhgsdjhfk
kjsahdfjksa
'''

"""
isdfjakhjsfdadsf
kjhdfkjahsdf
jsadfjakjhdsf

"""

esta_es_una_variable = 10
ESTA_ES_UNA_CONSTANTE = 3.1416

lista = [3,4, True, "Holi", 0, None]

lista[5] = 6
print(lista)

tupla = (3,4, True, "Holi", 0, None, None)
#tupla[5] = 6
print(tupla)

larousse = {True:'valor', None: True, 'numero': 4, None: False}
larousse[True] = 7
print(larousse)



conjunto = {1, 1, 4, 4, None, False}
print(type(esta_es_una_variable))
esta_es_una_variable = 5.6
print(type(esta_es_una_variable))


a = '2'
b = '3'
print(int(a) + int(b))

print("holi {1:^20.5f} - {0}".format(5, 8.9))
print("holi {} - {}")

print("holi " + str(5) + " - " + str(8.9))

print(f"Holi {5} - {8.9:^20.6f}")
#print("Holi Canoli")

var1 = int(input("Querido usuario, sea usted tan amable de escribir un numero: "))
var2 = int(input("Muchas gracias, ahora escriba otro numero: "))

print(f"La suma de {var1} y {var2} es {var1 + var2}")
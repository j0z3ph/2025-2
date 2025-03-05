/**
 * @file ejercicio3.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejercicio 3
 * @version 0.1
 * @date 2025-03-05
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int numero;
    int suma = 0;
    printf("Querido usuario, ingrese un numero entero ;) ");
    scanf("%d", &numero);

    for (;numero != 0;)
    {
        suma += (numero % 10);
        numero = numero / 10;
    }

    printf("Querido usuario, la suma de los digitos que componen el numero proporcionado es: %d\n", suma);

    return 0;
}

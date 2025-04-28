/**
 * @file promedio.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que saca promedios
 * @version 0.1
 * @date 2025-03-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int ene;
    int suma = 0;
    printf("Usuario -_-\" ingrese n: ");
    scanf("%d", &ene);

    if(ene < 1) {
        printf("Que te pasa tonoto -_-, haz las cosas bien\n");
        return 1;
    }

    int arreglo[ene];

    for (int i = 0; i < ene; i++)
    {
        printf("Ingrese un dato :> ");
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < ene; i++)
    {
        suma += arreglo[i];
    }

    printf("El promedio es %f\n", (float)suma / (float)ene);
    return 0;
}

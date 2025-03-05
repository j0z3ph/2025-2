/**
 * @file ejercicio2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejercicio 2
 * @version 0.1
 * @date 2025-03-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>


int main()
{
    int ene;
    int dato;
    int suma = 0;
    double promedio;
    
    printf("T~T escribe un numero ;^; ");
    scanf("%d", &ene);

    for (size_t i = 0; i < ene; i++)
    {
        printf("Ingresa un numero ToT ");
        scanf("%i", &dato);
        suma += dato;
    }

    promedio = (double)suma / (double)ene;

    printf("El promedio es :'( %lf\n", promedio);
    
    
    return 0;
}

/**
 * @file arreglos2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas arreglos
 * @version 0.1
 * @date 2025-03-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int ene;
    int suma = 0;
    printf("Usuario, ingrese ene ;^; ");
    scanf("%i", &ene);
    int arr[ene];

    for (int i = 0; i < ene; i++)
    {
        printf("Ingresa un numero ;P ");
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < ene; i++)
    {
        suma += arr[i];
    }

    printf("El promedio es %lf\n", (double)suma / (double)ene);
    
    
    return 0;
}

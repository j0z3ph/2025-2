/**
 * @file promedio.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Promedio
 * @version 0.1
 * @date 2025-03-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int ene;
    int valor;
    int suma = 0;
    double promedio;
    printf("Usuario, ingrese ene: ");
    scanf("%d", &ene);

    for (size_t i = 0; i < ene; i++)
    {
        printf("Ingresa un numero xd ");
        scanf("%i", &valor);
        suma += valor;
    }

    promedio = (double)suma / (double)ene;

    printf("El promedio es %lf\n", promedio);
    return 0;
}

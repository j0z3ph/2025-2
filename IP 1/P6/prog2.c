/**
 * @file prog2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Promedio de n numeros
 * @version 0.1
 * @date 2025-03-04
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int ene;
    int suma = 0;
    int valor;
    double promedio;

    printf("Querido usuario, dame ene: ");
    scanf("%i", &ene);
    for (size_t i = 0; i < ene; i++)
    {
        printf("Escribe un numero: ");
        scanf("%d", &valor);
        suma += valor;
    }
    promedio = (double)suma / (double)ene;

    printf("El promedio es %.2lf\n", promedio);

    return 0;
}

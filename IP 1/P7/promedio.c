/**
 * @file promedio.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-03-07
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int ene;
    int suma = 0;
    printf("Usuario, ingresa ene -_-' ");
    scanf("%d", &ene);

    int arrg[ene];

    for (size_t i = 0; i < ene; i++)
    {
        printf("Ingresa un numero :| ");
        scanf("%i", &arrg[i]);
    }

    for (size_t i = 0; i < ene; i++)
    {
        suma += arrg[i];
    }

    printf("El promedio es ._. %lf\n", (double)suma / (double)ene);

    return 0;
}

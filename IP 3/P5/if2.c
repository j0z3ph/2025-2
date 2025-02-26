/**
 * @file if2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief mas ifs
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int opcion;
    printf("Mensaje para todes\n");
    printf("  1. Ninio\n");
    printf("  2. Adolescente\n");
    printf("  3. Adultos Jovenes\n");
    printf("  4. Adultos\n");
    printf("  5. Adultos Mayores\n");
    printf("Seleccione su grupo de edad: ");

    scanf("%i", &opcion);
    if (opcion == 1)
    {
        printf("Que haces aqui, tomate un chocomilk y a mimir\n");
    }
    else if (opcion == 2)
    {
        printf("Que haces aqui, dejate ahi\n");
    }
    else if (opcion == 3)
    {
        printf("Que haces aqui, ponte a chambiar\n");
    }
    else if (opcion == 4)
    {
        printf("Que haces aqui, ve pensando en tu retiro\n");
    }
    else if (opcion == 5)
    {
        printf("Que haces aqui, ve por tu pension del bienestar\n");
    }
    else
        printf("Opcion con capacidades diferentes\n");

    return 0;
}

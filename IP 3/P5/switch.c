/**
 * @file switch.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief y el switch :P
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

    switch (opcion)
    {
    case 1:
    {
        char texto[20] = "Que haces aqui";
        printf("%s, tomate un chocomilk y a mimir\n", texto);
    }
    break;
    case 2:
        printf("Que haces aqui, dejate ahi\n");
        break;
    case 3:
        printf("Que haces aqui, ponte a chambiar\n");
        break;
    case 4:
        printf("Que haces aqui, ve pensando en tu retiro\n");
        break;
    case 5:
        printf("Que haces aqui, ve por tu pension del bienestar\n");
        break;
    default:
        printf("Opcion con capacidades diferentes\n");
        break;
    }

    return 0;
}

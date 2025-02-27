/**
 * @file masifs.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas ifss
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int seleccion;

    printf("Menu\n");
    printf("  1. Minions\n");
    printf("  2. Adolescentes\n");
    printf("  3. Adultos Jovenes\n");
    printf("  4. Adultos\n");
    printf("  5. Adultos Mayores\n");
    printf("Seleccione su grupo de edad: ");
    scanf("%i", &seleccion);

    switch (seleccion)
    {
    case 1:
    {
        char cadena[50] = "Compra terrenos. Invierte en bitcoins";
        printf("%s\n", cadena);
    }
    break;
    case 2:
        printf("Estudia y no pistees\n");
        printf("Estudia y no pistees\n");
        printf("Estudia y no pistees\n");
        break;
    case 3:
        printf("Aprende a sumar\n");
        break;
    case 4:
        printf("No esta demas un examen de prostata c:\n");
        break;
    case 5:
        printf("Firmale aqui\n");
        break;
    default:
        printf("Aprende a leer tonoto >:c\n");
        // break;
    }

    return 0;
}

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

    if (seleccion == 1)
    {
        printf("Compra terrenos. Invierte en bitcoins\n");
    }
    else if (seleccion == 2)
    {
        printf("Estudia y no pistees\n");
    }
    else if (seleccion == 3)
    {
        printf("Aprende a sumar\n");
    }
    else if (seleccion == 4)
    {
        printf("No esta demas un examen de prostata c:\n");
    }
    else if (seleccion == 5)
    {
        printf("Firmale aqui\n");
    }
    else
        printf("Aprende a leer tonoto >:c\n");

    return 0;
}

/**
 * @file ifss.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ifssss
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int seleccion;
    printf("Menu\n");
    printf("  1. Ninios\n");
    printf("  2. Adolescentes\n");
    printf("  3. Adultos jovenes\n");
    printf("  4. Adultos\n");
    printf("  5. Adultos Mayores\n");
    printf("Seleccione su grupo de edad: ");
    scanf("%i", &seleccion);

    if (seleccion == 1)
    {
        printf("Compra terrenos, invierte en bitcoins y no crezcas.\n");
    }
    else if (seleccion == 2)
    {
        printf("Aprende a sumar y multiplicar.\n");
    }
    else if (seleccion == 3)
    {
        printf("Compra tres departamentos, renta dos y quedate uno.\n");
    }
    else if (seleccion == 4)
    {
        printf("No te endrogues\n");
    }
    else if (seleccion == 5)
    {
        printf("Tramita tu INAPAM\n");
    }
    else
    {
        printf("No seas tonoto >:|\n");
    }
    return 0;
}

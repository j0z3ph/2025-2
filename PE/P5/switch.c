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

    {
        int nueva_variable;
    }

    // nueva_variable = 6;

    printf("Menu\n");
    printf("  1. Ninios\n");
    printf("  2. Adolescentes\n");
    printf("  3. Adultos jovenes\n");
    printf("  4. Adultos\n");
    printf("  5. Adultos Mayores\n");
    printf("Seleccione su grupo de edad: ");
    scanf("%i", &seleccion);

    switch (seleccion)
    {
    case 1:
    {
        char texto[100] = "Compra terrenos, invierte en bitcoins y no crezcas.\n";
        printf("%s", texto);
    }
    break;
    case 2:
        printf("Aprende a sumar y multiplicar.\n");
        printf("Aprende a sumar y multiplicar.\n");
        printf("Aprende a sumar y multiplicar.\n");
        break;
    case 3:
        printf("Compra tres departamentos, renta dos y quedate uno.\n");
        break;
    case 4:
        printf("No te endrogues\n");
        break;
    case 5:
        printf("Tramita tu INAPAM\n");
        break;
    default:
        printf("No seas tonoto >:|\n");
        // break;
    }

    return 0;
}

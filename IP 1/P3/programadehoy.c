/**
 * @file programadehoy.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Variables
 * @version 0.1
 * @date 2025-02-19
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

#define PI 3.1416

int variableGlobal; // No debemos hacer esto

int main()
{
    static float variableLocal = 5.6;
    // PI = 4.5;
    // const float PI = 3.1416;

    printf("El valor de pi es %f\n", PI);
    return 0;
}

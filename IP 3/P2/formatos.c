/**
 * @file formatos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Formatos de salida
 * @version 0.1
 * @date 2025-02-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

#define PI 3.1416

int global; // Esto es una variable global y esta mal


int main()
{
    //const float PI = 3.1416;
    

    printf("El valor de pi es %- 30.2f.\n", PI);
    
    return 0;
}

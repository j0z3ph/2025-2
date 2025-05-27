/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int* suma(int *a, int *b) {
    int resultado = *a + *b;
    return &resultado;
}


int main()
{
    int a = 5, b = 6;
    int *resul = suma(&a,&b);
    printf("%i\n", *resul);
    
    return 0;
}

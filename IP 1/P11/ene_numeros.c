/**
 * @file ene_numeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi segunda recursion
 * @version 0.1
 * @date 2025-05-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

void numera(int n) {
    static size_t i = 0;
    if ( i <= n)
    {
        printf("%i ", i);
        i++;
        numera(n);
    }
}


int main()
{
    int n = 10;
    numera(n);
    
    
    return 0;
}

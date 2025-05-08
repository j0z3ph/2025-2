/**
 * @file pasos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

void fun_valor(int a) {
    
    a++;
    printf("-> %d\n", a);
}

void fun_referencia(int *a){
    (*a)++;
}

int main()
{
    int valor = 10;
    fun_valor(valor);
    printf("%i\n", valor);
    fun_referencia(&valor);
    printf("%i\n", valor);
    
    
    return 0;
}

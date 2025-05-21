/**
 * @file primer.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int a = 10;
    int *puntero;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    printf("%p - %p\n", arr, &arr);

    puntero = &a;

    printf("%p - %i\n", &a, a);
    
    printf("%p - %p - %i\n", puntero, &puntero, *puntero);

    puntero -= 100;
    printf("%p - %p - %i\n", puntero, &puntero, *puntero);

    return 0;
}

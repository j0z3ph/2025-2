/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int arr[10];
    int *arr2 = arr;
    
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i+1;
    }
    

    /*printf("%p - %i\n", arr, *arr);
    printf("%p - %i\n", arr+1, *(arr+1));

    printf("%p - %i\n", arr, arr[0]);
    printf("%p - %i\n", arr+1, arr[1]);
    */

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", *(arr + i));
    }

    printf("\n%p - %p\n", &arr, arr);
    printf("\n%p - %p\n", &arr2, arr2);
    
    return 0;
}

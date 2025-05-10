/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Arreglos
 * @version 0.1
 * @date 2025-05-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

void imprime_arr(int arr[]) {
    static size_t i = 0;
    if ( i < 10)
    {
        printf("%d ", arr[i]);
        i++;
        imprime_arr(arr);
    }
}


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    
    imprime_arr(arr);
    
    return 0;
}

/**
 * @file wbinario.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    FILE *archi = fopen("Numeros.bin", "wb");
    int a = 12;
    double b = 3.1416;

    if(archi == NULL) {
        printf("Error");
        return 1;
    }

    fwrite(&a, sizeof(int), 1, archi);
    fwrite(&b, sizeof(double), 1, archi);

    fclose(archi);
    
    return 0;
}

/**
 * @file binariow.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int a = 9;
    double b = 1.5;

    FILE *archi = fopen("Binario.bin", "wb");
    if(archi == NULL) {
        printf("Error");
        return 1;
    }

    fwrite(&a, sizeof(int), 1, archi);
    fwrite(&b, sizeof(double), 1, archi);
    

    fclose(archi);
    
    return 0;
}

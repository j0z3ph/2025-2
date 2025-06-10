/**
 * @file agregar.c
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
    FILE *archi = fopen("OtroArchivo.txt", "a");
    if(archi == NULL) {
        printf("error");
        return 1;
    }

    fputs("Hola\n", archi);

    fclose(archi);
    
    return 0;
}

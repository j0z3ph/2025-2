/**
 * @file agregar.c
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
    FILE *archi = fopen("Archivo.txt", "a");

    if(archi == NULL) {
        printf("Error");
        return 1;
    }

    fprintf(archi, "Otra cadena");

    fclose(archi);
    
    return 0;
}

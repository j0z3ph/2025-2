/**
 * @file prog1.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa en C :>
 * @version 0.1
 * @date 2025-02-17
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    // Aqui estoy escribiendo un comentario de 
    // linea

    /*
    putc(getc(stdin), stdout);
    putc(getc(stdin), stdout);
    putc(getc(stdin), stdout);
    */

    //putchar(getchar());
    
    char cadena[5];

    gets(cadena);
    puts(cadena);

    return 0;
}

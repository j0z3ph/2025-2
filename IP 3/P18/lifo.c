/**
 * @file lifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Stack
 * @version 0.1
 * @date 2025-05-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int **stack, size_t *size, int value)
{
    if (*stack == NULL)
    {
        *stack = malloc(sizeof(int));
        **stack = value;
        *size = 1;
    }
    else
    {
        *stack = realloc(*stack, (*size + 1) * sizeof(int));
        *(*stack + *size) = value;
        (*size)++;
    }
}

int pop(int **stack, size_t *size)
{
    int value = 0;
    if (*stack != NULL)
    {
        if (*size == 1)
        {
            value = **stack;
            free(*stack);
            *stack = NULL;
            *size = 0;
            return value;
        }
        else
        {
            value = *(*stack + (*size - 1));
            *stack = realloc(*stack, sizeof(int) * (*size - 1));
            (*size)--;
            return value;
        }
    }
}

int main()
{
    int *stack = NULL;
    size_t size = 0;
    void (*agregar)(int **stack, size_t *size, int value);
    int (*eliminar)(int **stack, size_t *size);
    eliminar = pop; 
    agregar = &push;



    agregar(&stack, &size, 5);
    agregar(&stack, &size, 15);
    agregar(&stack, &size, 8);
    agregar(&stack, &size, 2);
    agregar(&stack, &size, 80);
    agregar(&stack, &size, 0);
    agregar(&stack, &size, -3);
    agregar(&stack, &size, -10);
    agregar(&stack, &size, 72);

    for (int i = 0; i < size; i++)
    {
        printf("%i ", stack[i]);
    }
    printf("\n");

    while (stack != NULL)
    {
        printf("%i\n", eliminar(&stack, &size));

        for (int i = 0; i < size; i++)
        {
            printf("%i ", stack[i]);
        }
        printf("\n");
    }

    return 0;
}

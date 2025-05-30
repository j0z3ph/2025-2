/**
 * @file fifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-29
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int **queue, int *size, int value)
{
    if (*queue == NULL)
    {
        *queue = malloc(sizeof(int));
        **queue = value;
        (*size)++;
    }
    else
    {
        *queue = realloc(*queue, (*size + 1) * sizeof(int));
        *(*queue + *size) = value;
        (*size)++;
    }
}

int pop(int **queue, int *size)
{
    int removed = 0;
    if ((*queue) != NULL)
    {
        if (*size == 1)
        {
            removed = **queue;
            free(*queue);
            *queue = NULL;
            *size = 0;
            return removed;
        }
        else
        {
            removed = **queue;
            memcpy(*queue, *queue + 1, sizeof(int) * (*size - 1));
            *queue = realloc(*queue, sizeof(int) * (*size - 1));
            (*size)--;
            return removed;
        }
    }
    return removed;
}

int main()
{
    int *queue = NULL;
    int size = 0;

    push(&queue, &size, 5);
    push(&queue, &size, 7);
    push(&queue, &size, -20);
    push(&queue, &size, 12);
    push(&queue, &size, 24);
    push(&queue, &size, 4);
    push(&queue, &size, 50);

    for (size_t i = 0; i < size; i++)
    {
        printf("%i ", queue[i]);
    }

    while (queue != NULL)
    {
        printf("\n%i\n", pop(&queue, &size));
        for (size_t i = 0; i < size; i++)
        {
            printf("%i ", queue[i]);
        }
    }

    return 0;
}

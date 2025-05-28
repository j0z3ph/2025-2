/**
 * @file fifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Queue
 * @version 0.1
 * @date 2025-05-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int **queue, size_t *size, int value)
{
    if (*queue == NULL)
    {
        *queue = malloc(sizeof(int));
        **queue = value;
        *size = 1;
    }
    else
    {
        *queue = realloc(*queue, (*size + 1) * sizeof(int));
        *(*queue + *size) = value;
        (*size)++;
    }
}

int pop(int **queue, size_t *size)
{
    int value = 0;
    if (*queue != NULL)
    {
        if (*size == 1)
        {
            value = **queue;
            free(*queue);
            *queue = NULL;
            *size = 0;
            return value;
        }
        else
        {
            value = **queue;
            memcpy(*queue, *queue + 1, sizeof(int) * (*size - 1));
            *queue = realloc(*queue, sizeof(int) * (*size - 1));
            (*size)--;
            return value;
        }
    }
}

int main()
{
    int *queue = NULL;
    size_t size = 0;

    push(&queue, &size, 5);
    push(&queue, &size, 15);
    push(&queue, &size, 8);
    push(&queue, &size, 2);
    push(&queue, &size, 80);
    push(&queue, &size, 0);
    push(&queue, &size, -3);
    push(&queue, &size, -10);
    push(&queue, &size, 72);

    for (int i = 0; i < size; i++)
    {
        printf("%i ", queue[i]);
    }
    printf("\n");

    while (queue != NULL)
    {
        printf("%i\n", pop(&queue, &size));

        for (int i = 0; i < size; i++)
        {
            printf("%i ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}

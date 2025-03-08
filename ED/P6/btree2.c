/**
 * @file btree2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Binary Tree 2
 * @version 0.1
 * @date 2025-03-06
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MIN_SIZE_QUEUE 10

typedef struct Node
{
    size_t value;
    struct Node *left;
    struct Node *rigth;
} Node;

typedef struct BTree
{
    Node *root;
    size_t size;
    // size_t __last;
    void (*insert)(struct BTree **self, size_t value);
    // void (*freeBTree)(struct BTree **self);
    // bool (*delete)(struct BTree **self, size_t value);
    void (*removing)(struct BTree **self, size_t value);
} BTree;

typedef struct Queue
{
    Node **head;
    size_t size;
    void (*insertQueue)(struct Queue **self, Node *ptr);
    void (*freeQueue)(struct Queue **self);
} Queue;

void insert(struct BTree **tree, size_t value);
Queue *newQueue();
void insertQueue(Queue **queue, Node *ptr);
void freeQueue(Queue **queue);
Node *newNode(size_t value);
void insert(struct BTree **tree, size_t value);
void removing(BTree **tree, size_t value);

Queue *newQueue()
{
    Queue *q = malloc(sizeof(Queue));
    q->head = NULL;
    q->size = 0;
    q->freeQueue = freeQueue;
    q->insertQueue = insertQueue;
    return q;
}

void insertQueue(Queue **queue, Node *ptr)
{
    if ((*queue)->head == NULL)
    {
        //(*queue)->head = malloc(sizeof(Node *)); // aqui estaba el error
        (*queue)->head = malloc(sizeof(Node *) * MIN_SIZE_QUEUE);
        (*queue)->head[0] = ptr;
        (*queue)->size = 1;
    }
    else
    {
        if (((*queue)->size % MIN_SIZE_QUEUE) == 0)
        {
            (*queue)->head = realloc((*queue)->head, sizeof(Node *) * MIN_SIZE_QUEUE * (((*queue)->size / MIN_SIZE_QUEUE) + 1));
        }
        (*queue)->head[(*queue)->size] = ptr;
        (*queue)->size++;
    }
}

void freeQueue(Queue **queue)
{
    if ((*queue) != NULL)
    {
        if ((*queue)->head != NULL)
        {
            free((*queue)->head);
        }
        free((*queue));
        (*queue) = NULL;
    }
}

Node *newNode(size_t value)
{
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->left = node->rigth = NULL;
    return node;
}

BTree *newBTree()
{
    BTree *tree = malloc(sizeof(BTree));
    tree->root = NULL;
    tree->size = 0;
    // tree->__last = 0;
    tree->insert = insert;
    // tree->freeBTree = freeBTree;
    // tree->delete = delete;
    tree->removing = removing;
    return tree;
}

void insert(BTree **tree, size_t value)
{
    if ((*tree)->root == NULL)
    {
        (*tree)->root = newNode(value);
        (*tree)->size = 1;
    }
    else
    {
        Queue *queue = newQueue();
        size_t cont = 0;
        queue->insertQueue(&queue, (*tree)->root);
        //Node *node = newNode(value);
        while (cont < queue->size)
        {
            if (queue->head[cont]->left == NULL)
            {
                queue->head[cont]->left = newNode(value);
                break;
            }
            else
            {
                queue->insertQueue(&queue, queue->head[cont]->left);
            }
            if (queue->head[cont]->rigth == NULL)
            {
                queue->head[cont]->rigth = newNode(value);
                break;
            }
            else
            {
                queue->insertQueue(&queue, queue->head[cont]->rigth);
            }
            cont++;
        }
        queue->freeQueue(&queue);
        (*tree)->size++;
    }
}

void removing(BTree **tree, size_t value)
{
    if ((*tree)->root != NULL)
    {
        if ((*tree)->root[0].value == value && (*tree)->size == 1)
        {
            free((*tree)->root);
            (*tree)->root = NULL;
            (*tree)->size = 0;
        }
        else
        {
            Queue *queue = newQueue();
            bool inserted = true;
            size_t cont = 0;
            queue->insertQueue(&queue, (*tree)->root);

            // Construimos la cola
            while (inserted)
            {
                inserted = false;
                if (queue->head[cont]->left != NULL)
                {
                    queue->insertQueue(&queue, queue->head[cont]->left);
                    inserted = true;
                }
                if (queue->head[cont]->rigth != NULL)
                {
                    queue->insertQueue(&queue, queue->head[cont]->rigth);
                    inserted = true;
                }
                cont++;
            }

            bool found = false;
            size_t index = 0;
            // Buscamos el valor a eliminar
            for (size_t i = 0; i < queue->size; i++)
            {
                if (queue->head[i]->value == value)
                {
                    found = true;
                    index = i;
                    break;
                }
            }

            // Eliminamos
            if (found)
            {
                queue->head[index]->value = queue->head[queue->size - 1]->value;
                if ((queue->size & 1) == 0)
                {
                    // Left
                    queue->head[((queue->size - 2) >> 1)]->left = NULL;
                }
                else
                {
                    queue->head[((queue->size - 3) >> 1)]->rigth = NULL;
                }
                free(queue->head[queue->size - 1]);
            }
            (*tree)->size--;
            queue->freeQueue(&queue);
        }
    }
}

int main()
{
    BTree *tree = newBTree();

    tree->insert(&tree, 12 + 1);
    tree->insert(&tree, 2);
    tree->insert(&tree, 14);
    tree->insert(&tree, 9);
    tree->insert(&tree, 5);
    tree->insert(&tree, 1);
    tree->insert(&tree, 7);
    tree->insert(&tree, 100);



    tree->removing(&tree, 12+1);
    tree->removing(&tree, 5);
    

    return 0;
}

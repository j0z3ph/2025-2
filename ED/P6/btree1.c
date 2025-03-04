/**
 * @file btree1.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Binary Tree
 * @version 0.1
 * @date 2025-03-04
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#define MIN_SIZE 10

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
    size_t __last;
    void (*insert)(struct BTree **self, size_t value);
    void (*freeBTree)(struct BTree **tree);
} BTree;

BTree *newBTree();
void insert(BTree **tree, size_t value);
void freeBTree(BTree **tree);

BTree *newBTree()
{
    BTree *tree = malloc(sizeof(BTree));
    tree->root = NULL;
    tree->size = 0;
    tree->__last = 0;
    tree->insert = insert;
    return tree;
}

void insert(BTree **tree, size_t value)
{
    if ((*tree)->root == NULL)
    {
        (*tree)->root = malloc(sizeof(Node) * MIN_SIZE);
        (*tree)->root[0].value = value;
        (*tree)->root[0].left = (*tree)->root[0].rigth = NULL;
        (*tree)->size = 1;
        (*tree)->__last = 0;
    }
    else
    {
        if (((*tree)->size % MIN_SIZE) == 0)
        {
            (*tree)->root = realloc((*tree)->root, sizeof(Node) * MIN_SIZE * (((*tree)->size / MIN_SIZE) + 1));
        }
        (*tree)->root[(*tree)->size].value = value;
        (*tree)->root[(*tree)->size].left = (*tree)->root[(*tree)->size].rigth = NULL;

        if ((*tree)->root[(*tree)->__last].left == NULL)
        {
            (*tree)->root[(*tree)->__last].left = &((*tree)->root[(*tree)->size]);
        }
        else if ((*tree)->root[(*tree)->__last].rigth == NULL)
        {
            (*tree)->root[(*tree)->__last].rigth = &((*tree)->root[(*tree)->size]);
            (*tree)->__last++;
        }
        (*tree)->size++;
    }
}

void freeBTree(BTree **tree)
{
    if ((*tree) != NULL)
    {
        if ((*tree)->root != NULL)
        {
            free((*tree)->root);
        }
        free((*tree));
        (*tree) = NULL;
    }
}

int main()
{
    BTree *mytree = newBTree();
    mytree->insert(&mytree, 9);
    mytree->insert(&mytree, 5);
    mytree->insert(&mytree, 6);
    mytree->insert(&mytree, 4);
    mytree->insert(&mytree, 3);
    mytree->insert(&mytree, 8);
    mytree->insert(&mytree, 1);
    mytree->insert(&mytree, 7);
    mytree->insert(&mytree, 33);
    mytree->insert(&mytree, 45);
    mytree->insert(&mytree, 11);



    mytree->freeBTree(&mytree);
    return 0;
}

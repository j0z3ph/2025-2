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
#include <stdbool.h>
#define MIN_SIZE 100

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
    void (*freeBTree)(struct BTree **self);
    bool (*delete)(struct BTree **self, size_t value);
} BTree;

BTree *newBTree();
void insert(BTree **tree, size_t value);
void freeBTree(BTree **tree);
bool delete(BTree **tree, size_t value);

BTree *newBTree()
{
    BTree *tree = malloc(sizeof(BTree));
    tree->root = NULL;
    tree->size = 0;
    tree->__last = 0;
    tree->insert = insert;
    tree->freeBTree = freeBTree;
    tree->delete = delete;
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

bool delete(BTree **tree, size_t value)
{
    bool result = false;
    size_t index = 0;
    bool found = false;
    size_t parentNode = 0;
    if ((*tree)->root != NULL)
    {
        if ((*tree)->root->value == value && (*tree)->size == 1)
        {
            free((*tree)->root);
            (*tree)->root = NULL;
            (*tree)->size = 0;
            (*tree)->__last = 0;
        }
        else
        {
            for (size_t i = 0; i < (*tree)->size; i++)
            {
                if ((*tree)->root[i].value == value)
                {
                    index = i;
                    found = true;
                    break;
                }
            }
            if (found)
            {
                (*tree)->root[index].value = (*tree)->root[(*tree)->size - 1].value;
                if ((((*tree)->size - 1) & 1) == 0)
                {
                    parentNode = (((*tree)->size - 1) - 2) >> 1;
                    (*tree)->root[parentNode].rigth = NULL;
                }
                else
                {
                    parentNode = (((*tree)->size - 1) - 1) >> 1;
                    (*tree)->root[parentNode].left = NULL;
                }
                result = true;
            }
        }
    }
    return result;
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

void breadthfirstsearch(BTree *tree) {
    for (size_t i = 0; i < tree->size; i++)
    {
        printf("%lu ", tree->root[i].value);
    }
}

void preorder(Node *root) {
    if(root != NULL) {
        printf("%lu ", root->value);
        preorder(root->left);
        preorder(root->rigth);
    }
}

void inorder(Node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%lu ", root->value);
        inorder(root->rigth);
    }
}

void postorder(Node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->rigth);
        printf("%lu ", root->value);
    }
}

int main()
{
    BTree *mytree = newBTree();
    

    mytree->insert(&mytree, 3);
    mytree->insert(&mytree, 5);
    mytree->insert(&mytree, 7);
    mytree->insert(&mytree, 10);
    mytree->insert(&mytree, 1);
    mytree->insert(&mytree, 2);
    mytree->insert(&mytree, 8);
    

    breadthfirstsearch(mytree);
    printf("\n");

    preorder(mytree->root);
    printf("\n");

    inorder(mytree->root);

    printf("\n");
    postorder(mytree->root);

    mytree->delete(&mytree, 7);



    mytree->freeBTree(&mytree);
    return 0;
}

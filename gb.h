#ifndef gb_h
#define gb_h
#include<stdio.h>
#define Size 20
typedef struct pearson
{
    char name[Size];
    char surname[Size];
    int *numbers;
    int number;
} pearson;
typedef struct node
{
    struct pearson *data;
    struct node *left;
    struct node *right;
} node;
int insert_pearson(node **root, pearson *new_pearson);
struct node * search_pearson(node *root, char surname[Size], char name[Size]);
#endif

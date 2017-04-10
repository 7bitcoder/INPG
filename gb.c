#include "gb.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Size 20
int insert_pearson(node **root, pearson *new_pearson)
{
   struct node *parent;
    int n;
node* new_node = (node*) malloc(sizeof(node));
if(new_node==NULL)
{
    return 0;
}
new_node->data=new_pearson;
new_node->left=NULL;
new_node->right=NULL;
if(*root == NULL){
        *root = new_node;
        return 1;
    }
parent = *root;
while(1)
{
n=strcmp(parent->data->surname, new_pearson->surname);
if(n>0)
    {
    if(parent->left==NULL)
        {
        parent->left=new_node;
        return 1;
        }
    else
        {
            parent=parent->left;
            continue;
        }
    }
if(n<0)
    {
    if(parent->right==NULL)
        {
        parent->right==new_node;
        return 1;
        }
    else
        {
        parent=parent->right;
        continue;
        }
    }
if(n=0)
    {
    n=strcmp(parent->data->name, new_pearson->name);
    if(n>0)
        {
        if(parent->left==NULL)
            {
            parent->left=new_node;
            return 1;
            }
        else
            {
                parent=parent->left;
                continue;
            }
        }
    if(n<=0)
        {
        if(parent->right==NULL)
            {
            parent->right==new_node;
            return 1;
            }
        else
            {
            parent=parent->right;
            continue;
            }
        }
    }

}
return 0;
}
struct node * search_pearson(node *root, char search_surname[Size], char search_name[Size])
{
    int n;
    if(root==NULL)
    {
        return NULL;
    }
   n=strcmp(root->data->surname, search_surname);
   if(n==0)
    {
       n=strcmp(root->data->name, search_name);
        if(n>0)
        {
           search_pearson(root->left, search_surname, search_name);
        }
        if(n==0)
            return root;
        if(n<0)
        {
           search_pearson(root->right, search_surname, search_name);
        }
    }
    if(n>0)
    {
       search_pearson(root->left, search_surname, search_name);
    }
    if(n<0)
    {
       search_pearson(root->right, search_surname, search_name);
    }
    return NULL;
}

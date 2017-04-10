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
#include<stdio.h>
int palindrom(char *napis, int N);
int main(void)
{
int N=6;
printf("podaj dlugosc napisu:\n");
    char napis[N];
    fgets(napis, N, stdin);
    printf("%d", palindrom(napis, N-1));
}

int palindrom(char *napis, int N)
{
if(napis[0]==napis[N])
      {
      if(N<=1)
             return 1;
      if(N>1)
             return palindrom(napis+1, N-2);
      }
else
             return 0;
}

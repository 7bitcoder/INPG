#include<stdio.h>
#include<stdlib.h>
#include "gb.h"
#define Size 20
int main()
{
    int menu=1;
    struct node *root = NULL;
while(menu != 8)
{
    switch(menu)
    {
    case 1:
        {
        printf("wpisz\n"
               "1-menu\n"
               "2-wprowadz dane\n"
               "3-wyszukaj dane poprzez nazwisko\n"
               "4-przechodzenie po drzewie InOrder\n"
               "5-znajdz pierwsze nazwisko alfabetycznie\n"
               "6-znajdz ostatnie nazwisko alfabetycznie\n"
               "7-liczba wezlow w drzewie\n"
               "8-podaj wyskosc drzewa\n"
               "9-wyjdz z programu\n");
               break;
        }
    case 2:
        {
        int b=1, i;
        struct pearson* new_pearson;
        new_pearson=(pearson*) malloc(sizeof(pearson));
        if(new_pearson==NULL)
        {
            printf("blad, brak pamieci\n");
            free(new_pearson);
            break;
        }
        printf("podaj nazwisko\n");
        scanf("%s", new_pearson->surname);
        printf("podaj imie\n");
        scanf("%s", new_pearson->name);
        printf("podaj liczbe numerow\n");
        scanf("%d", &b);
        new_pearson->numbers=(int*)malloc(b*sizeof(int));
        if(new_pearson->numbers==NULL)
            {
                printf("blad, brak pamieci\n");
                free(new_pearson);
                free(new_pearson->numbers);
                break;
            }
        for(i=0;i<b;i++)
            {
        printf("podaj numer %d\n", b);
        scanf("%d", new_pearson->numbers[i]);
            }
        new_pearson->number=b;
        if(insert_pearson(&root, new_pearson)==1)
                {
                    printf("dane zapisane pomyslnie\n");
                    break;
                }
        else
                {
                    printf("blad zapisu danych\n");
                    break;
                }
        }
    case 3:
        {
            struct node *searchingpearson;
            char name[Size];
            char surname[Size];
            printf("podaj nazwisko\n");
            fgets(surname, Size, stdin);
            printf("podaj imie\n");
            fgets(name, Size, stdin);
            searchingpearson=search_pearson(root, surname, name);
            if(searchingpearson==NULL)
            {
                printf("nie znaleziono osoby w bazie danych");
                break;
            }
            else
            {
            printf("%s %s\n", searchingpearson->data->surname, searchingpearson->data->name);
            int i;
            for(i = 0; i < searchingpearson->data->number; i++)
                {
                    printf("%d\n", root->data->numbers[i]);
                }
                break;

            }
        }
        case 9:
            {
                return 0;
            }
    }
        scanf("%d", &menu);
        if(menu > 8 || menu < 0)
            printf("Podano zly numer\n");
}
return 0;
}

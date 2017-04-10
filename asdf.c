#include<stdio.h>
int main(void)
{
    int x='*';
    int putchar(x);
    char ch=' ';
    int wysokosc;
    int spacja;
    int gwiazdka;
    int prog;
printf("Podaj wysokosc hoinki, q-konczy program\n");
while((scanf("%d", &wysokosc)))
{
prog=1;
 for(;wysokosc>0;wysokosc--)
    {
            for(spacja=wysokosc;spacja>1;spacja--)
               printf("%c", ch);
            for(gwiazdka=0;gwiazdka<prog;gwiazdka++)
                    putchar(x);
            prog=prog+2;
            printf("\n");
    }
printf("Podaj wysokosc hoinki\n");
}
return 0;
}
#include<stdio.h>
unsigned long long newton(unsigned long long a, unsigned long long b);
int main(void)
{
unsigned long long a, b;
printf("podaj dwumian newtona np(a/b)\n");
scanf("%llu", &a);
scanf("%llu", &b);
printf("dwumian newtona z (%llu/%llu) wynosi %lu", a, b, newton(a, b));
}
unsigned long long newton( unsigned long long a, unsigned long long b )
{
if(b>a)
        return 0; //w funkcji main oznaczyc o jako blad 
if(b==0||a==b)
        return 1;
if(b>0&&a>0&&a>b)
        return newton(a-1, b-1)+newton(a-1, b);
}
 #include<stdio.h>

unsigned long potega(unsigned long podstawa, unsigned long wykladnik);
int main(void)
{
    unsigned long podstawa, wykladnik;
    printf("podaj liczbe i potege:\n");
    scanf("%lu", &podstawa);
    scanf("%lu", &wykladnik);
    printf("%lu^%lu=%lu", podstawa, wykladnik, potega(podstawa, wykladnik));
}
unsigned long potega(unsigned long podstawa, unsigned long wykladnik)
{
if(wykladnik==0)
    return 1;
if(wykladnik==1)
    return podstawa;
if(wykladnik>1)
    return podstawa*potega(podstawa, wykladnik-1);
}
 
 
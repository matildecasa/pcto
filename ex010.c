#include <stdio.h>

int main()
{
   int x;
    printf("inserisci un anno");
    scanf("%d", &x);
    printf("x: %d\n", x);

    if (x%4 == 0 && x%100 !=0 || x%400==0)
    {printf ("verificato");}
    else
    {printf("non verificato");}
}

    
    
   
    
#include <stdio.h>

int main()

{
    int x,y;
    
    printf("inserisci due numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y); 

    int somma = x+y;
    int differenza = x-y;
    int quoziente = x/y;
    int resto= x%y;
    int prodotto = x*y;

    printf("somma: %d, differenza:%d, quoziente:%d, resto:%d, prodotto:%d\n", somma,differenza, quoziente, resto, prodotto);
}


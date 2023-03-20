#include <stdio.h>

int main()
{
   int x,y,z,k,f;
    printf("inserisci tre numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("y: %d\n", z);

    k= x-y;
    f = y-z;

   if (k==f) {printf("è verificato");}
}
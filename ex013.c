#include <stdio.h>

int main()
{ int x;
  int y;
  int j;
    printf("inserisci anno di nascita");
    scanf("%d", &x);
    if ( x==1969)
    { printf ("sei nato lo stesso anno dello sbarco sulla luna");}
    else
    {
        if ( x> 1969)
         { 
            y=x-1969;
            printf ("sei nato %d anni dopo lo sbarco sulla luna",y);
            }
        else
        {
            j=1969-x;
            { printf("sei nato %d anni prima dello sbarco sulla luna",j);}
        }
    }

}
   
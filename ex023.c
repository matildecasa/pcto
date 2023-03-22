#include <stdio.h>

int main() 
{
int N; int y; int z; int m; int k;
z=0;
printf("inserisci un intero N");
scanf("%d", &N);
k=N;
while (N>0)
{ printf("inserisci un numero");
  scanf("%d", &y);
  z= z+y;
  N=N-1;
}
m= z/k;
printf ("la somma di tutti i numeri che ho inserito è %d\n",z);
printf ("la media di tutti i numeri che ho inserito è %d\n",m);

}
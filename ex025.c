#include <stdio.h>

int main() 
{
int N; 
int y; 
float z; 
float m; 
float k;
z=0;k=0; N = 1;

while (N>0)
{   printf("inserisci un numero");
    scanf("%d", &y);
if ( y>=0)
    {
     z= z+y;
     k=k+1;
     m= z/k;  
      printf ("la media di tutti i numeri che ho inserito è %f\n",m);
  
    }

    else 
    {
        N= N-1;
        printf ("hai inserito il numero negativo\n");
    }
}

}
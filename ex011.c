#include <stdio.h>

int main()
{
    float x;
    float K;
    float F;
    printf("inserisci tre numeri");
    scanf ("%f", &x);
    scanf ("%f", &K);
    scanf ("%f", &F);
    if (x+K>F && x+F>K && F+K>x)
    { 
        printf("verificato");
    }
    else 
    {   printf(" non verificato"); }
   
    }  

#include <stdio.h>

int main()
{
    float x;
    float K;
    float F;
    printf("inserisci temperatura in celsius");
    scanf("%f", &x);
    printf("x: %f\n", x);
    
    
    if (x< -273.15)
    { 
        printf("errore");
    }
    else 
    { F = (9/5)*x +32;
    K = x + 273.15;
    printf("la temperatura in farhenheit è:%f\n", F);
    printf("la temperatura in kelvin è:%f\n", K);
    }  
}
#include <stdio.h>
int main() 
{int x;
printf("inserisci un numero");
scanf("%d", &x);

int divisore = x-1;
while (divisore>1)
{ if (x% divisore ==0)
{ printf ("non è un numero primo\n"),divisore;
  break;
}
divisore--;
}
if (divisore==1)
printf("è un numero primo");   
}



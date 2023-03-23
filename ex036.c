#include <stdio.h>

int ft_strlen(char *a)
{
int n=0; 
 while (a[n] != 0)
   {
     n= n+1;
   }
   return (n);  
}

int main()
{
  int n;
  char a[] = "eisha kandyany";
  n = ft_strlen(a);
  printf ("la stringa è lunga %d",n);
}  
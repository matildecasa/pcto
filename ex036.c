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
  char a[] = "eisha kandyany";
  int n=0; 
 while (a[n] != 0)
   {
     n= n+1;
   }  
   printf ("la stringa è lunga %d",n);
}  
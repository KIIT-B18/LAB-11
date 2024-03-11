#include <stdio.h>

 int isprime(int x)
  {
  int c=0;
  for(int i =1;i<=x;i++)
   {
   if (x%i==0)
   c++;
   }
   return c;
   }
  void main()
  {
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int check=isprime(n);
  if(check==2)
  printf("%d is a prime number\n",n);
  else
  printf("%d is not a prime number\n",n);
  }

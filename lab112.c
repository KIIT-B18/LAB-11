#include <stdio.h>
	int fact(int x)
	 {
	 int p=1;
	  for(int i=1;i<=x;i++)
	  p=i*p;
	  return p;
	  }
 void main()
 {
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  int factorial;
  factorial=fact(n);
  printf("Factorial of %d =%d\n",n,factorial);
  }

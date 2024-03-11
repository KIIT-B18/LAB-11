#include <stdio.h>

  int add(int x, int y)
  {
  int c;
  c=x+y;
  return c;
  }
  void main ()
  {
  int a,b;
  printf("Enter two numbers that you want to add:\n");
  scanf("%d%d",&a,&b);
  int sum;
  sum=add(a,b);
  printf("The sum of %d and %d is %d.\n",a,b,sum);
  }

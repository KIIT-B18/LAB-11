#include <stdio.h>

int fibo(int x)
 {
 int a=0,b=1,c;
 if (x==1)
 return a;
 if(x==2)
 return b;
 for(int i=3;i<=x;i++)
 {
 c=a+b;
 a=b;
 b=c;
 }
 return c;
 }
 void main()
 {
 int n;
 printf("Enter the value of n : \n");
 scanf("%d",&n);
 int fib;
 fib=fibo(n);
 printf("%dth term of the fionacci series is %d\n",n,fib);
 }

#include<stdio.h>

void main()
{  
   int a,b,sum;
   printf("Enter value of a and b: ");
   scanf("%d\n%d",&a,&b);
   int *p1,*p2;
   p1=&a;
   p2=&b;
   *p1=*p1+*p2;
   *p2=*p1-*p2;
   *p1=*p1-*p2;
   printf("Value of a: %d\n",a);
   printf("Value of b: %d",b);
}
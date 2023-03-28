#include<stdio.h>
void main()
{  
   int a,b,temp;
   printf("Enter value of a and b: ");
   scanf("%d\n%d",&a,&b);
   int *p1,*p2;
   p1=&a;
   p2=&b;
   temp=*p1;
   a=*p2;
   b=temp;
   printf("Value of a: %d\n",a);
   printf("Value of b: %d",b);
}
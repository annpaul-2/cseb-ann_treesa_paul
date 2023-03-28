#include<stdio.h>
void main()
{  
   int a,b,temp;
   printf("Enter value of a and b: ");
   scanf("%d\n%d",&a,&b);
   int *p1,*p2;
   p1=&a;
   p2=&b;
   int div=(*p1)/(*p2);
   printf("Value of div: %d\n",div);
   
}
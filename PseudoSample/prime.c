#include<stdio.h>
#include<stdlib.h>

void main()
{  
   char str[20];
   int sum=0,n;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the elements: ");
   for(int i=0;i<n;i++)
    scanf("%d",&str[i]);
   for(int i=0;i<n;i++)
   {
     sum=sum+str[i];
   }
   printf("Sum= %d",sum);
   for(int i=2;i<=sum/2;i++)
     {  
       if(sum%i==0)
        {
          printf("Sum is a composite number");
          exit(0);
        }
     }
     printf("Sum is a prime number");
    
}
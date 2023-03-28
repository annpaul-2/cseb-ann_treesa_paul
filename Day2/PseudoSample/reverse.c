#include<stdio.h>
#include<stdlib.h>

void main()
{  
   char str[20],arr[20];
   int sum=0,n,j=0;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the elements: \n");
   for(int i=0;i<n;i++)
    scanf("\n%c",&str[i]);
   for(int i=n-1;i>=0;i--)
   {
     if(str[i]=='0')
        arr[j]='$';
     else
      arr[j]=str[i];
     j++;
   }
   printf("\nThe elements in reverse order are: \n");
   for(int i=0;i<n;i++)
    printf("%c\t",arr[i]);
  
  
}
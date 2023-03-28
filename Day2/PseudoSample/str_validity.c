#include<stdio.h>
#include<stdlib.h>

void main()
{
   int count=0;
   char str[20];
   printf("Enter the string: ");
   scanf("%s",str);
   for(int i=0;str[i]!='\0';i++)
   {
     if(str[i]=='#')
       count++;
     else if(str[i]=='*')
       count--;
    else
     {
       printf("Invalid string");
       exit(0);
     }
   }
   if(count==0)
    printf("Equal");
   else if(count>0)
    printf("# is greater than *");
   else 
    printf("* is greater than #");

    
}
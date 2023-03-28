#include<stdio.h>
 void main()
  {
    int n,m,arr[20][20],a=0,b=0,c=0,dia[10],updia[10],lodia[10];
    printf("Enter no of rows and columns: ");
    scanf("%d\n%d",&n,&m);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
          {
            printf("\nEnter value of arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
          }
       }
     for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
          { 
            if(i==j)
             {
              dia[a]=arr[i][j];
              a++;
              }
            else if(i<j)
             { 
              updia[b]=arr[i][j];
              b++;
              }
            else
             {
              lodia[c]=arr[i][j];
              c++;
             }
          }
       }
   for(int i=0;i<n;i++)
       {printf("\n");
        for(int j=0;j<m;j++)
          { printf("\t");
            printf("%d",arr[i][j]);
          }
       }
   printf("\nDiagonal elements are: \n");
   for(int i=0;i<a;i++)
        printf("%d\t",dia[i]);
   printf("\nUpper diagonal elements are: \n");
   for(int i=0;i<b;i++)
        printf("%d\t",updia[i]);
   printf("\nLower diagonal elements are: \n");
   for(int i=0;i<c;i++)
        printf("%d\t",lodia[i]);
     
  }   
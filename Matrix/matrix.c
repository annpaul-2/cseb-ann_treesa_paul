#include<stdio.h>
 void main()
  {
    int n,m,arr[20][20];
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
       {printf("\n");
        for(int j=0;j<m;j++)
          { printf("\t");
            printf("%d",arr[i][j]);
          }
       }
  }   
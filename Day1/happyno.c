#include<stdio.h>
void main()
{
    int n, sum=0, d;
    printf("Enter the number : ");
    scanf("%d", &n);
    int p=n;
    while(n>9)
    {
        sum = 0;
        while (n!=0)
        {
            d = n%10;
            sum+=d*d;
            n=n/10;
        }
        n=sum;        
    }
    if(n==1)
        printf("%d is a happy Number",p);
    else
        printf("%d is not a happy Number",p);
}

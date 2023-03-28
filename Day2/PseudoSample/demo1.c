#include<stdio.h>

void main()
{
    int n=5;
    int i=0,s=0;
    while(n>0)
    {
        int r=n%10;
        int p=8^i;
        s=s+p*r;
        i=i+1;
        n=n/10;
    }
    printf("%d",s);
}
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the length of sides :\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)<c||(b+c)<a||(a+c)<b)
        printf("Triangle can't be made from given sides!");
    else
        printf("Valid Triangle");
}

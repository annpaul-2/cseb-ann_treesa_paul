#include<stdio.h>
void main()
{
    float n;
    printf("Enter number of candies: ");
    scanf("%f", &n);
    float b=n/4;
    float a=3*n/4;
    printf("\nSam   : %.2f", a);
    printf("\nAngel : %.2f", b);
}
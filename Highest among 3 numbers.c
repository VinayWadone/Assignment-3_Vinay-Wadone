#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n\nHello!!Please enter 3 numbers one by one,\n\nEnter the first number:\n\n");
    scanf("%d",&a);
    printf("\n\nEnter the second number:\n\n");
    scanf("%d",&b);
    printf("\n\nEnter the third number:\n\n");
    scanf("%d",&c);
    d=(a>=b)?a:b;
    e=(c>=d)?c:d;
    printf("\n\nThe highest among three numbers entered is %d\n\n",e);
}

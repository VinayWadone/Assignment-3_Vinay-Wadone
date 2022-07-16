#include<stdio.h>
int main()
{
    int a;
    printf("\n\nHello!\n\nPlease enter a number of your choice\n\n");
    scanf("%d",&a);
    printf(a>0?"\n\nIts a positive number\n\n":"\n\nIts a non positive number\n\n");
    return 0;
}


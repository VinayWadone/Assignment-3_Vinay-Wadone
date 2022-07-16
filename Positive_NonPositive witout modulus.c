#include<stdio.h>
int main()
{
    int a,b;
    printf("\\nHello!\n\nPlease enter a number of your choice\n\n");
    scanf("%d",&a);
    b=a/2*2;
    printf(b==a?"\n\nIt's an even number\n\n":"\n\nIt's an odd number\n\n");
    return 0;
}


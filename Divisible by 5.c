#include<stdio.h>
int main()
{
    int a,b;
    printf("\\nHello!\n\nPlease enter a number of your choice\n\n");
    scanf("%d",&a);
    b=a%5;
    printf(b==0?"\n\nYour number is divisible by 5\n\n":"\n\nYour number is not divisible by 5\n\n");
    return 0;
}

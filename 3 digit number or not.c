#include<stdio.h>
int main()
{
    int a,b;
    printf("\n\nHello!\n\nPlease enter a number of your choice\n\n");
    scanf("%d",&a);
    b=a/100;
    //printf(b==0?"\n\nIt's an even number\n\n":"\n\nIt's an odd number\n\n");
    if(b!=0)
    {
        b=a/1000;
        printf(b==0?"\n\nIt's a 3 digit number\n\n":"\n\nIt's NOT a 3 digit number\n\n");
    }
    else printf("\n\nIt's NOT a 3 digit number\n\n");
    return 0;
}


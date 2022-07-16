#include<stdio.h>
int main()
{
    int a,b,c,d,e1,e2,e3;
    printf("\n\nHello!!Please enter 3 sides' lengths of your triangle one by one,\n\nEnter the first side:\n\n");
    scanf("%d",&a);
    printf("\n\nEnter the second side:\n\n");
    scanf("%d",&b);
    printf("\n\nEnter the third side:\n\n");
    scanf("%d",&c);
    d=a+b;
    e1=d>c?1:0;
    d=a+c;
    e2=d>b?1:0;
    d=b+c;
    e3=d>a?1:0;
    printf(e1+e2+e3==3?"\n\nIts a valid triangle":"\n\nBetter luck next time\n\n");
    return 0;
}

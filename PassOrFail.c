#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    int a1,b1,c1,d1,e1,total;
    printf("\n\nHello!!\n\nEnter the marks of the students subject wise, please\n\n");
    printf("\n\nEnter the marks of the subject \"A\":\n\n");
    scanf("%f",&a);
    a1=a>=33;
    printf("\n\nEnter the marks of the subject \"B\":\n\n");
    scanf("%f",&b);
    b1=b>=33;
    printf("\n\nEnter the marks of the subject \"C\":\n\n");
    scanf("%f",&c);
    c1=c>=33;
    printf("\n\nEnter the marks of the subject \"D\":\n\n");
    scanf("%f",&d);
    d1=d>=33;
    printf("\n\nEnter the marks of the subject \"E\":\n\n");
    scanf("%f",&e);
    e1=e>=33;
    total=a1+b1+c1+d1+e1;
    printf(total==5?"\n\nPASS\n\n":"\n\nFAIL\n\n");
    return 0;
}

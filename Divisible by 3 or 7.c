#include<stdio.h>
int main()
{
   int a,rem3,rem7,b,c,d;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&a);
    rem3=a%3;
    b=rem3==0?1:0;
    rem7=a%7;
    c=rem7==0?1:0;
    d=b+c;
    printf(d==1?"\n\nYes this number can be divisible by 3 or 7\n\n":"\n\nBetter luck next time\n\n");
    //printf(rem==0?"\n\nThis number is divisible by 2&3\n\n":"\n\nBetter luck next time\n\n");
    return 0;
}

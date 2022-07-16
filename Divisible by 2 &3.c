#include<stdio.h>
int main()
{
    int a,rem;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&a);
    rem=a%6; //6 is the first number which is divisible by 2&3, so the multiples of 6 will be the numbers which will be divisible by both 2&3
    printf(rem==0?"\n\nThis number is divisible by 2&3\n\n":"\n\nBetter luck next time\n\n");
    return 0;
}

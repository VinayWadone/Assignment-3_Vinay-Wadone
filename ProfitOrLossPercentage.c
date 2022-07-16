#include<stdio.h>
int main()
{
    float  CP,SP,profit,loss;
    printf("\n\nHello!!\n\nEnter your cost price\n\n");
    scanf("%f",&CP);
    printf("\n\nEnter your selling price\n\n");
    scanf("%f",&SP);
    if (CP!=SP)
    {
        if(CP>SP)
        {
            loss=(CP-SP)/CP*100;
            printf("\n\nSorry! you are having a Loss Percentage of %0.2f%%\n\n",loss);
        }
        else
        {
            profit=(SP-CP)/CP*100;
            printf("\n\nWow! you are having a Profit Percentage of %0.2f%%\n\n",profit);
        }
    }
        else printf("\n\nYou are not making a profit or loss\n\n");
        return 0;
    }

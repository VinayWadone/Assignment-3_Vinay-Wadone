#include<stdio.h>
int main()
{
   int a,rem3,rem7,b,c,d;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&a);
    if (a>0)printf("\n\n%d is a positive number\n\n",a);
    else{
        if (a<0)printf("\n\n%d is a negative number\n\n",a);
        else printf("\n\nYou entered a 0\n\n",a);
    }

    return 0;
}

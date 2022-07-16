#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n\nHello!\n\nPlease enter the first number of your choice\n\n");
    scanf("%d",&a);
    printf("\n\nnow, enter the second number of your choice\n\n");
    scanf("%d",&b);
    //c=a-b;
    //printf(b==0?"\n\nIt's an even number\n\n":"\n\nIt's an odd number\n\n");
    if(a>b)
    {
      printf("\n\nYour first number %d is greater than your second number %d\n\n",a,b);
    }
    //else printf(a<b?"\n\nYour first number %d is smaller than your second number %d\n\n",a,b:"\n\nYour first number %d & your second number %d both are same\n\n",a,b);
    else
{
    if(a<b)
    {
      printf("\n\nYour first number %d is smaller than your second number %d\n\n",a,b);
    }
    else
        printf("\n\nYou entered both first & second numbers as %d only\n\n",a);
}
    return 0;
}

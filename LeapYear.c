#include<stdio.h>
int main()
{
    int year,a,b;
    printf("\nHello!\n\nEnter the year\n\n");
    scanf("%d",&year);
    a=year%4;

    if(a==0)
    {
        a=year%100;

        if(a==0)
        {
            a=year%400;

            printf(a==0?"\n\nIts a leap year\n\n":"\n\nIts NOT a leap year\n\n");
        }
        else printf("\n\nIts a leap year\n\n");
    }
    else printf("\n\nIts NOT a leap year\n\n");
}


/*If the year is evenly divisible by 4, go to step 2. ...
If the year is NOT evenly divisible by 100, its a leap year else,go to step 3. ...
If the year is evenly divisible by 400, go to step 4. ...
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).*/

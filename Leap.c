#include <stdio.h>
#include<conio.h>
int main()
{
    int year;
    clrscr();
    printf("to check leap year or not ");
    printf("enter a year");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    getch();
    return 0;
}

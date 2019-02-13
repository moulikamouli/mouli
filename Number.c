#include <stdio.h>
#include<conio.h>
int main()
{
    int number;
    clrscr();
    printf(" to check whether the number is positive or negative or zero\n");
    printf("enter the number);
    scanf("%d",&number);
    if(number>0)
        printf("positive");
    else if(number<0)
    printf("negative");
    else
    printf("zero");
    getch();
    return 0;
}

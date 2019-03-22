#include <stdio.h>
#include<conio.h>

void main()
{
    int base=2,expo=3,power;
    clrscr();
    power=pow(base,expo);
    printf("%d^%d=%d",base,expo,power);
    getch();
}

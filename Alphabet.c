#include <stdio.h>
#include<conio.h>
int main()
{
    char c;
    clrcsr();
    printf(" to check whether a character is alphabet or not ");
    printf("enter a character");
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("%c is an alphabet.",c);
    }
    else
    {
        printf("%c is not an alphabet.",c);
    }
    getch();
    return 0;
}


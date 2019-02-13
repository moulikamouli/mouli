#include <stdio.h>
#include<conio.h>
int main()
{
    int number1,number2,number3;
    clrscr();
    printf("Enter the numbers to find largest number ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if( number1>=number2 && number1>=number3 )
    {
        printf("%d is the largest number.", number1);
    }
    else if( number2>=number1 && number2>=number3 )
    {
        printf("%d is the largest number.", number2);
    }
    else( number3>=number1 && number3>=number2 )
    {
        printf("%d is the largest number.", number3);
    }
    return 0;
}

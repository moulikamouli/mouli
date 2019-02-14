#include <stdio.h>
#include<conio.h>
int main()
{
    int firstNumber, secondNumber;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d",&secondNumber);
    printf("\nbefore swapping, firstNumber = %d\n", firstNumber);
    printf("\nbefore swapping, secondNumber = %d\n", secondNumber);
    firstNumber = firstNumber - secondNumber;
    secondNumber = firstNumber + secondNumber;
    firstNumber = secondNumber - firstNumber;
    printf("\nAfter swapping, firstNumber = %d\n", firstNumber);
    printf("After swapping, secondNumber = %d", secondNumber);
    getch();
    return 0;
}


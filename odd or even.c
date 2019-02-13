#include <stdio.h>
int main()
{
    int number;
    printf(" to check whether the number is odd or even\n");
    printf("\nenter the number\n");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d the number is even",number);
    }
    else
    {
        printf("%d the number is odd",number);
    }
    return 0;
}

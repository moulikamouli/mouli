#include <stdio.h>
#include<conio.h>
void main()
{
    int n,m,i;
    clrscr();
    printf("to print even numbers between two intervals");
    scanf("%d%d",&m,&n);
    for(i=m-1;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
    }
getch();
}

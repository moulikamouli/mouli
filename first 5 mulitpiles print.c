#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,n,i;
    clrscr();
    printf("enter a  value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=n*i;
    }
    printf("%d*%d=%d\n",n*i,sum);
    getch();
}

#include <stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("enter the n value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={5,7,8,1,0};
int max=a[0],i;
clrscr();
for(i=0;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}
printf("%d",max);
getch();
}

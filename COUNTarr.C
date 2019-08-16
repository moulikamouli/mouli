#include<stdio.h>
void main()
{
char s[200];
int i,count=0;
for(i=0;i<strlen(s);i++)
{
if(s[i]!='\0')
{
count++;
}
}
printf("count=%d",count);
getch();
}

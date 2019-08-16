void main()
{
char s[100];
int n=3,i;
gets(s);
for(i=0;i<strlen(s);i++)
{
while(i<n)
{
printf("%s",s);
i++;
}
}
getch();
}

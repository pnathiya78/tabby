#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[200];
int c=0,i=0;
clrscr();
printf("enter the paragraph");
gets(ch);
while(ch[i]!=0)
{
if(ch[i]=='.')
{
c++;
}
else
{
}
i++;
}
printf("%d",c);
}

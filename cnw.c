#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[200];
int c=1,i=0;
printf("enter the line:);
gets(ch);
while(ch[i]!=0)
{
if(ch[i]==' ')
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

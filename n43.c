#include<stdio.h>
#include<string.h>
void main()
{
char s[1000];
int i;
gets(s);
while(s[i]!=0)
{
if((s[i]>=97)&&(s[i]<=122))
{
printf("%C",s[i]);
}
i++;
}
}

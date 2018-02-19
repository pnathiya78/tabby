#include<stdio.h>
int main()
{
char ch[50]="helloworld.123";
int nc=0,i=0;
while(ch[i]!='\0')
{
if((ch[i]>=0)&&(ch[i]<=9))
{
++nc;
}
++i;
}
printf("%d",nc);
}

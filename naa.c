#include<stdio.h>
#include<conio.h>
int main()
{
int t, n,rem,result=0,i;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
resuit=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
printf("the given number is armstrong");
}
else
{
printf("the given number is not armstrong");
}
return 0;
}

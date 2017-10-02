#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,fact;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of the given number is %d",fact);
return 0;
}

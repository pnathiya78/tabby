#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,rev=0,rem;
printf("enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("%d is the reverse of a number",rev);
getch();
}

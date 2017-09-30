#include<stdio.h>
#include<conio.h>
int main()
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
if(rev=t)
{
printf("the given number is palindrme");
}
else
{
printf("the given nmber is not palindrome");
}
return 0;
}

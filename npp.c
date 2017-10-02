#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("the number is not prime");
}
else
{
printf("the  number is prime);
}
}
return 0;
}

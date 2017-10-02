#include<stdio.h>
#include<conio.h>
int main()
{
int base,pow,i=1,sum=1;
printf("enter the base");
scanf("%d",&base);
printf("enter the pow");
scanf("%d",&pow);
while(i<=pow)
{
sum=sum*base;
}
printf("the power of a number is %d",base);
return 0;
}

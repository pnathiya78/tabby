#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a is greater");
}
else
{
printf("c is greater");
}
else
{
if(b>c)
{
printf("b is greaer");
}
else
{
printf("c is greater");
}
}
}
retrn 0;
}

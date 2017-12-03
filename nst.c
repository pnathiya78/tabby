#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
printf("enter the values before swapping");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("enter the values after swapping");
printf("%d %d",a,b);
getch();
}

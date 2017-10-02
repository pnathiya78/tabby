#include<stdio.h>
#include<conio.h>
int main()
{
int i,f,l;
printf("enter the first and last number");
scanf("%d,%d"&f,&l);
for(i=f;i<=l;i++)
{
if(i%2==0)
{
printf("the number %d is even",i);
}
}
return 0;
}

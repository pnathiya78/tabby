#include<stdio.h>
#include<coni.h>
int main()
{
int f,l,i;
printf("enter the first and last number");
scanf("%d,%d",&f,&l);
for(i=f;i<=l;i++);
{
if(i%2==1)
{
printf("the %d is odd",i);
}
}
return 0;
}

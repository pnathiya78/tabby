#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[3],i;
printf("enter the value of n:%d",n);
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
printf("%d",i);
}
}

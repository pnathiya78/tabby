
#include<stdio.h>
#include<conio.h>
void main()
{
int n,b[n],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
if(b[i]<b[i+1])
{
}
else
{
b[i]=b[i]+b[i+1];
b[i+1]=b[i]-b[i+1];
b[i]=b[i]-b[i+1];
}
}
printf("%d",b[n]);
}



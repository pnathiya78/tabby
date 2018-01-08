#include<stdio.h>
#include<conio.h>
vid main()
{
int a,i,j,n,k,c[1][n],sum=0;
scanf("%d%d",&n,&k);
for(i=0;i<1;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&c[i][j]);
}
}
for(a=0;a<k;a++)
{
for(i=0;i<1;i++)
{
for(j=0;j<n;j++)
{
sum=sum+c[i][j];
}
}
}
printf("%d",sum);
}

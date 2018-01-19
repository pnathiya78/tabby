#include<stdio.h>
#include<conio.h>
void main()
{
char c1[50];
char c2[50];
int i=0;
scanf("%s",&c1);
scanf("%s",&c2);
while((c1[i]&&c2[i])!=0)
{
if(c1[i]==c2[i])
{
printf("%s",c1[i]);
c1++;
}
else
{
c2++;
}
i++;
}
while((c1[i]&&c2[i])!
if(c2==0)
{
printf("%s",c1[i]);
}
if(c1>c2)
{
printf("%s",c1[i]);
}
else
{
printf("%s",c2[i]);
}

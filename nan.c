#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter the alphabet");
scanf("%c",&ch);
if((ch>=65&&ch<=90)||(ch>=97||ch<=122))
{
printf("enter character is alphabet");
}
else
{
printf("enter character is not alphabet");
}
return 0;
}

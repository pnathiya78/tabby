#include <stdio.h>

int main(void) {
char s[50];
int i=0,b=0;
scanf("%s",&s);
while(s[i]!='\0')
{
	if((s[i]=='0')||(s[i]=='1'))
	{
		
	}
	else
	{
		++b;
	}
	++i;
}
if(b==0)
{
	printf("yes");
	
}
	return 0;
}

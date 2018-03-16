#include <stdio.h>
#include<string.h>

int main(void) {
	char s[50];
	scanf("%s",&s);
	int i=0,l;
	l=strlen(s);
	if((l%2)==0)
	{
		l=l/2;
		while(s[i]!='\0')
		{
			if((i==l)||(i==l-1))
			{
				printf("*");
			}
			else
			{
				printf("%c",s[i]);
			}
			++i;
		}
	}
	else
	{
	l=l/2;
	while(s[i]!='\0')
	{
		if(i==l)
		{
			printf("*");
		}
		else
		{
		printf("%c",s[i]);
		}
		++i;
	}
	}
	return 0;
}

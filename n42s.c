#include <stdio.h>

int main(void) {
	char c[50];
	char d[50];
	scanf("%s",&c);
	scanf("%s",&d);
	int i=0,j=0;
while(c[i]!='\0')
	{

		++i;
	}
while(d[j]!='\0')
	{
	
		++j;
	}
	 if(i>j)
	{
		printf("\n%s",c);
	}
else if(j>i)
	{
		printf("\n%s",d);
	}
	else
	{
		printf("equal");
		printf("%s",d);
	}
	return 0;
}


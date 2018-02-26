#include <stdio.h>

int main(void) {
	char c[50]="hello";
	char d[50]="world";
	int i=0,j;
	while(c[i]!='\0')
	{
		++i;
	}
	for(j=0;d[j]!='\0';++j,++i)
	{
		c[i]=d[j];
	}
	c[i]='\0';
	printf("%s",c);
	return 0;
}

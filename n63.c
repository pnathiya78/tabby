#include <stdio.h>

int main(void) {
	char s[100]="hello world";
	int i=0,w=1;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			++w;
		}
		++i;
		
	}
	printf("%d",w);
	return 0;
}

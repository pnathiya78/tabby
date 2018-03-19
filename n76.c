#include <stdio.h>

int main(void) {
	int n,c=0,i;
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
		if((n%i)==0)
		{
			++c;
			break;
		}
	}
	if(c!=0)
	{
		printf("yes");
	}
	return 0;
}

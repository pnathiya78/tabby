#include <stdio.h>

int main(void) {
	int n,i,prime=0;
	scanf("%d",&n);
	for(i=2;i<(n/2);i++)
	{
		if((n%2)==0)
		{
			++prime;
			break;
		}
	}
	if(prime!=0)
	{
		printf("not a prime");
	}
	else
	{
		printf("is a prime");
	}
	return 0;
}

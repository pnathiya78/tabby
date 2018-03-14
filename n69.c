#include <stdio.h>

int main(void) {
	int n,m,c;
	scanf("%d%d",&n,&m);
	c=n-m;
	if((c%2)==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}

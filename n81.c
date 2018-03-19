#include <stdio.h>

int main(void) {
	int n,m;
	printf("enter the number of kabali nijas and his opponent");
	scanf("%d%d",&n,&m);
	if(n>m)
	{
		printf("%d",n-m);
		}
		else
		{
		printf("%d",m-n);
		}
	return 0;
}

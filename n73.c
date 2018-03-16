#include <stdio.h>

int main(void) {
	int n,l,r,i=0;
	scanf("%d%d%d",&n,&l,&r);
	while(l<=r)
	{
		if(l==n)
		{
		++i;
		break;
		}
		++l;
	}
	if(i!=0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

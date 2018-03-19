#include <stdio.h>

int main(void) {
	int n,m,a,i=1,l;
	scanf("%d%d",&n,&m);
	a=n*m;
	if(n>m)
	{
	l=n;
	}
	else
	{
	l=m;	
	}
	while(i<=l)
	{
		if(a==i*i)
		{
			printf("yes");
			break;
		}
		++i;
	}
	return 0;
}

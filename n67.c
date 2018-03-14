#include <stdio.h>

int main(void) {
	int n,i=1;
	scanf("%d",&n);
	while(i<=10)
	{
		if(n%10==0)
		{
			printf("%d",n);
			break;
		}
	++n;
	++i;
	
	}

	return 0;
}

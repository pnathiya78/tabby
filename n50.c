#include <stdio.h>

int main(void) {
	int t=1,n,i=1;
	scanf("%d",&n);
	while(i<=(n/2))
	{
		t=t*2;
		if(t==n)
		{
			printf("yes");
			break;
		}
		++i;
	}
	return 0;
}

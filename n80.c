#include <stdio.h>

int main(void) {
	int n,n1,n2,n3,n4;
	scanf("%d",&n);
	while(n!=0)
	{
		n1=n%10;
		if((n1%2)!=0)
		{
		printf("%d ",n1);	
		}
		n=n/10;
	}
	return 0;
}

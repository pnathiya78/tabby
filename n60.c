#include <stdio.h>

int main(void) {
	int t1=0,t2=1,range,nt;
	printf("enter the range:");
	scanf("%d",&range);
	printf("%d",t2);
	while(nt<range)
	{
		nt=t1+t2;
		printf(" %d",nt);
		t1=t2;
		t2=nt;
	}
	return 0;
}

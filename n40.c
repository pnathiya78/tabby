#include <stdio.h>

int main(void) {
	int r,t1=0,t2=1,i,nt;
	printf("enter the range");
	scanf("%d",&r);
	printf("%d",t2);
	for(i=1;i<r;i++)
	{
		nt=t1+t2;
		printf("\t%d",nt);
		t1=t2;
		t2=nt;
	}
	return 0;
}

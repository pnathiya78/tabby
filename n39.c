#include <stdio.h>

int main(void) {
	int a[10],i,j,t;
	printf("enter the 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("the maximum among 10 numbers is:");
	printf("%d",a[0]);
	return 0;
}

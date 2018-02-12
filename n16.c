#include <stdio.h>

int main(void) {
	int f,l,i,c;
	scanf("%d",&f);
	scanf("%d",&l);
	if(f<=2)
	{
		printf("2");
	}
	while(f<=l)
	{
		for(i=2;i<f;i++)
		{
			c=0;
			if((f%i)==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			printf("\n%d",f);
		}
		++f;
	}
	return 0;
}

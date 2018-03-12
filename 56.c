#include <stdio.h>

int main(void) {
	char ch[50]="8678hgcj";
	int i=0,a=0,n=0;
	while(ch[i]!=0)
{
	if((ch[i]>=97)&&(ch[i]<=122))
	{
		++a;
	}
else if((ch[i]>='0')&&((ch[i]<='9')))
{
	++n;
}
++i;
}
if((a!=0)&&(n!=0))
{
	printf("yes");
}
	return 0;
}

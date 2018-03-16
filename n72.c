#include <stdio.h>

int main(void) {
   char ch[50]="btabb";
   int i=0;
   while(ch[i]!='\0')
   {
   	if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
   	{
   		printf("yes");
   		break;
   	}
   	++i;
   	}
	return 0;
}

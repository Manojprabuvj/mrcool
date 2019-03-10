#include <stdio.h>
int main()
 {
	char b[10];
	scanf("%s",b);
	int i,u,v;
	for(i=0;b[i]!='\0';i++)
	{
		u=b[i];
		if(u>91)
		{
			v=u-32;
			b[i]=v;
		}
		if(u<97)
		{
			v=u+32;
			b[i]=v;
		}
	}
	printf("%s",b);
	return 0;
 }

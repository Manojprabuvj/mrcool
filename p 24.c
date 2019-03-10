#include <stdio.h>
int main()
 {
	char b[10];
	scanf("%s",b);
	int i,flag=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='0' && b[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}

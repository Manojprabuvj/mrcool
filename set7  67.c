#include <stdio.h>
int main() 
{
	int m;
	printf("enter the number:");
	scanf("%d",&m);
	m=m+1;
	while(m%10!=0)
	{
		m=m+1;
	}
	printf("\n%d",m);
	return 0;
}

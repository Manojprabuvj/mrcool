#include <stdio.h>
int main() 
{
	int a,b,p,i,n;
	scanf("%d %d",&a,&b);
	for(i=2;i<=n;i++)
	{
		if(a%i==0 && b%i==0)
		{
			p=i;
		}
	}
	printf("%d",p);
	return 0;
}

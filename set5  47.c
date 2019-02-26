#include <stdio.h>
int main() 
{
	int c[100];
	int i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n the array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	int max=c[0];
	int min=c[0];
	for(i=1;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
		if(c[i]<min)
		{
			min=c[i];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);

	return 0;
}

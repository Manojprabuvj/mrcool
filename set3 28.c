#include <stdio.h>
int main() 
{
	int a[10],i,num;
	printf("enter the size of the array:");
	scanf("%d",&num);
	printf("\n enter the array elments:");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		printf("\n%d %d",a[i],i);
	}
	return 0;
}
	

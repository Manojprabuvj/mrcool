#include <stdio.h>
 
int main() 
{
	int a,b,sum;
	printf("enter the number1:");
	scanf("%d",&a);
	printf("enter the number2:");
	scanf("%d",&b);
	sum=a+b;
	if(sum%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}

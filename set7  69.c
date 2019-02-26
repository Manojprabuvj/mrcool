#include <stdio.h>
int main() 
{
	int num1,num2,difference;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the numr2:");
	scanf("%d",&num2);
	difference=num1-num2;
	if(difference%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}

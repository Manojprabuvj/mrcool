#include <stdio.h>
int main() 
{
	float len,br,area;
	printf("enter the length and breadth values of the farm:");
	scanf("%f %f",&len,&br);
	area=len*br;
	printf("\n%0.5f",area);
	return 0;
}

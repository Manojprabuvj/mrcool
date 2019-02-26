#include <stdio.h>

int main() 
{
	int minute,hrs,mins,secs=00;
	printf("enter the time in minutes:");
	scanf("%d",&minute);
	hrs=minute/60;
	mins=minute%60;
	if(mins>60)
	{
		secs=mins%60;
		mins=mins-secs;
	}
	printf("%d %d %d",hrs,mins,secs);
	return 0;
}

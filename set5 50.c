#include <stdio.h>
int main(void)
{
	int p;
  printf("enter num:");
	scanf("%d",&p);
  int i=2;
	while(i<=p)
	{
		if(i==p)
		{
			printf("yes");
		}
		i=i*2;
    }
	return 0;
}

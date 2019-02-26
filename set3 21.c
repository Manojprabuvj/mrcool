#include <stdio.h>

int main()
{
	int i,num,a,d,s=0;
 [ 
  printf("enter the total num");
	scanf("%d",&num);
  printf("starting with:");
	scanf("%d",&a);
  printf("ur difference to give");
	scanf("%d",&d);
	for(i=0;i<num;i++)
	{
		if(i==0)
		{
			s=s+a;
		}
		else
		{
			a=a+d;
			s=s+a;
			
		}
	}
	printf("%d",s);
 } 
	return 0;
}

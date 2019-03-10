#include <stdio.h>
int main() 
{
int p,q,i,j,k,count=0;
	scanf("%d %d",&p,&q);
	for(i=p;i<=q;i++)
  {
		for(j=1;j<=i;j++)
		{
			k=j*j;
			if(k==i)
			{
				count=count+1;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}

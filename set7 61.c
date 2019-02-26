#include <stdio.h>

int main() 
{
	char ch[20];
	int k,i;
	printf("enter the string and the k value:");
	scanf("%s" ,ch);
  scanf("%d" ,&k);
	for(i=0;i<k;i++)
	{
		printf("\n%c",ch[i]);
	}
	return 0;
}

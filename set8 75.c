#include <stdio.h>
#include<string.h>
int main(void) 
{

	char a[30];
	int k,i;
	scanf("%s",a);
	k=strlen(a);
	if(k%2==0)
	{
  
		a[k/2]='*';
		a[(k/2)-1]='*';
	}
	else
	{
		a[k/2]='*';
	}
	printf("\n%s",a);
	return 0;
}

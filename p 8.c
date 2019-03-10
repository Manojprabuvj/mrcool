#include <stdio.h>
#include<string.h>
int main() 
{
	char b[50];
	int i,len;
	scanf("%[^\n]s",b);
	len=strlen(b);
	if(b[0]>91)
	{
		b[0]=b[0]-32;
	}
	for(i=0;i<len;i++)
		{
			if(b[i]==' ')
			{
				if(b[i+1]>91)
				{
					b[i+1]=b[i+1]-32;
				}
			}
		}
	printf("%s",b);
	return 0;
}

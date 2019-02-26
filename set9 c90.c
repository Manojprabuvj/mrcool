#include <stdio.h>
#include<string.h>
int main() 
{
	char ch[50];
	int i,number;
	printf("\nenter the alphanumeric string:\n");
	scanf("%s",ch);
	number=strlen(ch);
	for(i=0;i<number;i++)
	{
		if(ch[i]>='0' && ch[i]<='9')
		{
			printf("%c",ch[i]);
		}
	}
	return 0;
}

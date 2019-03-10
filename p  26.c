#include <stdio.h>
int main() 
{
	char c[20];
	int i;
	scanf("%[^\n]s",c);
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{
			c[i]='$';
			break;
		}
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{
			c[i]='+';
		}
	}
	for(i=0;c[i]!='\0';i++)
	{
	if(c[i]=='$')
	{
		c[i]=' ';
	}
	if(c[i]!='+')
	{
	printf("%c",c[i]);
	}
	}
	return 0;
}


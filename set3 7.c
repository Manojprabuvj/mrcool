#include <stdio.h>
int main()
 {
	char ch;
	printf("enter the string:");
	scanf("%s",&ch);
	if(ch>=65&&ch<=90||ch>=97&&ch<=122)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}

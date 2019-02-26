#include<string.h>
int main()
{
	char c[10];
	scanf("%s",c);
	int i,temp=0,n;
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]=='1' || c[i]=='0')
		{
			temp=1;
		}
		else
		{
			temp=0;
			break;
		}
	}
	if(temp==1)
	{
		printf("yes");
	}
  else
  {
    printf("no");
  }
}

#include <stdio.h>
int main(void) 
{
char s2[50];
int i=0,flag=0;
scanf("%s",s2);
while(s2[i]!='\0')
{
if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='A'|s2[i]=='E'||s2[i]=='I'||s2[i]=='O'||s2[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
return 0;
}

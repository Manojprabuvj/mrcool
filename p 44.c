#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s,k;
char str3[100];
scanf("%s",&str3);
scanf("%d",&n);
k=strlen(str3);
s=n%k;
for(i=s;str3[i]!='\0';i++)
{
printf("%c",str3[i]);
}
for(i=0;i<s;i++)
{
printf("%c",str3[i]);
}
return 0;
}

#include <stdio.h>
int main()
{
char a[30];
int i,n,len=0,pos=0;	
scanf("%s",a);	
scanf("%d",&n);
len=strlen(a);
pos=len-n;
for(i=pos;i<len;i++)
{
printf("%c",a[i]);
}
}

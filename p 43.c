#include<stdio.h>
#include<string.h>
int main()
{
char a2[100],b2[100];
int n,l,i,j,c=0;
scanf("%s\t%s",a2,b2);
n=strlen(a2);
l=strlen(b2);

for(i=n-l;i<n;i++)
{
  for(j=0;j<l;j++)
  {
  if(a2[i]==b2[j])
  {
   c=c+1;
  }
  }
}
if(c==l)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}

#include<stdio.h>
int main()
  {
  int a[50],falg=0,n,k,i;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  
for(i=0;i<n;i++)
{
if(a[i]==k)
{
falg=1;
}
}
if(falg==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

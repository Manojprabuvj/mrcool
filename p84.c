#include <stdio.h>

int main(void) 
{
int a[10],n,i,j,s,max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
  s=a[i]|a[j];
  if(s>max)
  {
    max=s;
  }
  
}
}
printf("%d",max);
  return 0;
}

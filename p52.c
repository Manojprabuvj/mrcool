#include<stdio.h>

#include<string.h>
#include<math.h>
int main()
{
int a[10],n,i,j,t=0,k;
scanf("%d\t%d",&n,&k);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
  {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }
  }
}
printf("%d",a[k-1]);
return 0;
}
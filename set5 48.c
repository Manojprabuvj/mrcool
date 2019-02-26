#include<stdio.h>
int main()
{
  int b[50],i,n,avg,sum=0;
  printf("enter numbers:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  
  sum=sum+b[i];
  }
  avg=sum/n;
  printf("%d",avg);
  return 0;
}

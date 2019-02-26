#include<stdio.h>
int main(void)
{
  int fact=1,i,n;
  printf("the factorial is:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("%d",fact);
}

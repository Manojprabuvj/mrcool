#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int p,q,result,p1,q1,result1,p2,q2,result2;
  scanf("%d\t%d",&p,&q);
  scanf("%d\t%d",&p1,&q1);
  scanf("%d\t%d",&p2,&q2);
  result=abs(p-q);result1=abs(p1-q1);result2=abs(p2-q2);
  printf("%d\n%d\n%d",result,result1,result2);
  return 0;
}


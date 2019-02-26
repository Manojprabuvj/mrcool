#include<stdio.h>
int main()
{
int n,i,temp=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
  if(n%i==0)
{
temp=1;
break;
}
}
if(temp==0)
{
printf("\n prime");
}
else
{
printf("\n not a prime number");
}
return 0;
}

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int p,a,pp2,aa2,f=0,i,j;
scanf("%d\t%d",&p,&a);
for(i=0;i<p;i++)
{
  for(j=0;j<p;j++)

  {
    pp2=2*(i+j);
    aa2=i*j;
    if(p==pp2&&a==aa2)
    {
      f=1;
    }
  }
}
if(f==1)
printf("yes");
else 
printf("no");
return 0;
}

#include <stdio.h>
#include<string.h>
int main() 
{
  int m[100],n[100],i,temp;
    for(i=0;i<3;i++)
     {
    scanf("%d %d",&m[i],&n[i]);
     } 
    for(i=0;i<3;i++)
    {
      if(m[i]==m[i+1] || n[i]==n[i+1])
     {
      temp=1;
      break;
     }
    }
    if(temp==1)
    printf("yes");
    else
    printf("No");
  return 0;
}

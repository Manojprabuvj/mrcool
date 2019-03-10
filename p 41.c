#include<stdio.h>
int main()
{
    int m,k,i,n=1,c=0;
    scanf("%d %d",&m,&k);
    for(i=1;i<=m;i++)
    {
       n=n*k;
        if(n==m)
        {
            c++;
            break;
        }
        
     }
        if(c==0)
        printf("no");
        else
        printf("yes");
  return 0;
}

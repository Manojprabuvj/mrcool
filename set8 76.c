#include <stdio.h>
int main()
{
    int i,m,s=2;
    scanf("%d",&nm);
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            s++;
        }
    }
    if(s>2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

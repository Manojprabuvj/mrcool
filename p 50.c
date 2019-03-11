#include <stdio.h>
int main()
{
    int A,b1=0,c,i;
    scanf("%d",&A);
    for(i=2;i<A;i++)
    {
        if(A%1==0)
        {
            b1=1;
            break;
        }
    }
    if(b1==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}

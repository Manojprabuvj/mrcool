#include <stdio.h>
int main()
{
    int p1,q1,r1;
    float res;
    scanf("%d %d %d",&p1,&q1,&r1);
    if(p1>180 || q1>180 || r1>180)
    {
        printf("no");
    }
    else
    {
        if(p1+q1+r1==180)
        {
            printf("yes");
        }
        else
        {
        printf("no");
        }
    }
    return 0;
}

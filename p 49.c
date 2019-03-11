#include <stdio.h>
int main()
{
    int b1,i;
    scanf("%d",&b1);
    if(b1>=-32768 && b1<=32767)
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }
return 0;
}

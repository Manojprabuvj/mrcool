#include<stdio.h>
int main()
{
    
    int A,b,c,i;
    float res;
    scanf("%d",&A);
    for(i=1;i<=A;i++)
    
    {
        if(i%2==1 && A%i==0)
        {
            printf("%d ",i);
            }
    }
    return 0;
}
 

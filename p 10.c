#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,length,n,c=0;
    scanf("%s %s",a,b);
    length=strlen(a);
    n=strlen(b);
    if(length==n)
    {
        for(i=0;i<length;i++)
        {
         
         if(a[i]!=b[i])
            {
                c++;
         
         }
            
        }
         
         if(c==1)
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

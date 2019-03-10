#include <stdio.h>
int main() 
{
    int str[10],k,i=0,a,n,j,m=0;
	scanf("%d %d",&n,&a);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&str[i]);
	}
	j=0;
    while(j<a)
	{
	    scanf("%d",&k);
	    str[n]=k;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(str[i]>=m)
	        {
	            m=str[i];
	        }
	    }
	    printf("%d ",m); 
	j++; 
	}
return 0;	
}

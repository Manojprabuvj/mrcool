#include <stdio.h>
 
int main() 
 
{
int i,less ,large,j;
printf("\n enter the start range:");
scanf("%d",&less );
printf("\n enter the end range");
scanf("%d",&large );
printf("\n the prime numbers between %d and %d are:",less,large );
for(i=less ;i<=large ;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("\n%d",j);
}
}

#include<stdio.h>
 
int main() 
{
int n,rem,sum=0,result;
printf("\n enter the number:");
scanf("%d",&n);
result=n;
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(result==sum)
printf("\n %d is an Armstrong number",result);
else
printf("\n %d is not an Armstrong number",result);
}

#include <stdio.h>
 
int main(void) 
{
 
int num,rem,reverse=0;
int result;
printf("\n enter the number:");
scanf("%d",&num);
result=num;
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
if(result==reverse)
printf("\n  palindrome %d",reverse);
else
printf("\n not a palindrome");
}

#include <stdio.h>
#include<string.h>
int main() 
{
 char a2[100],b2[100];
 int i,k,m,c=0,flag;
 scanf("%s %s %d",a2,b2,&k);
 m=strlen(a2);
 for(i=0;i<m;i++)
 {
   if(a2[i]!=b2[i])
   {
     c++;
   }
   if(a2[i]!=b2[i] && c==k)
   {
     flag=1;
   }
   else
   flag=0;
 }
 if(flag==1)
 printf("yes");
 else 
 printf("No");
  return 0;
}


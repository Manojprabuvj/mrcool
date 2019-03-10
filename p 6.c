#include<stdio.h>
int main()
{
 char a[50],b[50];
 int i,p1=0,p2=0;
 gets(a);
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==a[i+1])
  {
   p1++;
  }
 }
 for(i=0;b[i]!='\0';i++)
 {
  if(b[i]==b[i+1])
  {
   p2++;
  }
 }
 if(p1==p2)
 {
 printf("yes");
 }
 else
 {
 printf("No");
 } 
 return 0;
 }

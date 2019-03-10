#include <stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int i,temp,num;
  gets(str);
  num=strlen(str);
  if(num%2==0)
  {
    for(i=0;i<num;i+=2)
    {
      temp=str[i];
      str[i]=str[i+1];
      str[i+1]=temp;
      }
    puts(str);
    }
  else
  {
    for(i=0;i<num-1;i+=2)
    {
      temp=str[i];
      str[i]=str[i+1];
      str[i+1]=temp;
      }
    puts(str);
    }
return 0;
}

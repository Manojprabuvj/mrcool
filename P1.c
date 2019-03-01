 #include <stdio.h>
#include <string.h>
 
int main()
{
   char m[100];
 
   printf("Enter a string to reverse\n");
   gets(m);
 
   strrev(m);
 
   printf("Reverse of the string is \n%s\n", m);
 
   return 0;
}

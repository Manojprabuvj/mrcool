#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
char b[100];
scanf("%[^\n]",b);
if(printf("%s",b))
return 0;
}

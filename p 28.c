#include <stdio.h>
int main()
{
    char e[50];
    int i,j=0;
    scanf("%[^\n]s",e);
    for(i=0;e[i]!='\0';i++)
    {
        if(e[i]==' ')
        {
            e[i]='$';
        }
    }
    for(i=0;e[i]!='\0';i++)
    {
        if(e[i]!='$') 
        {
            printf("%c",e[i]);
        }
    }
    return 0;
}

#include <stdio.h>
   int main(void) {
    int a,b,m;
    scanf("%d %d",&a,&b);
    m=b;
    b=a;
    a=m;
    printf("%d %d",a,b);
}

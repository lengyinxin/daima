#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int r = a > b ? a : b;
    printf("%d",r);
    return 0;
}
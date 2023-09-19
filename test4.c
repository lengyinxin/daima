#include <stdio.h>
int Add(int x,int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int c = Add(a,b);
    printf("%d",c);
    return 0;
}
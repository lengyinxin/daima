#include <stdio.h>
int main()
{
    int money;
    while(money < 10000000)
    {
        printf("fw/ your money:%d\n", money);
        money++;
    }
    if (money == 10000000)
    {
        printf("nb!");
    }
}
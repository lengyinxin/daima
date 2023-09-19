#include <stdio.h>
int main()
{
    int money;
    while(money < 1000)
    {
        printf("fw/ your money:%d\n", money);
        money++;
    }
    if (money == 1000)
    {
        printf("nb!");
    }
}
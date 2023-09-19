#include <stdio.h>
int main()
{
    printf("Are you a sb?\nyes:1\nno:0\n");
    int input;
    scanf("%d", &input);
    if(input == 1)
        printf("you are really a sb");
    else
        printf("you are a sb who didn't admit yourself");  
    return 0;
}
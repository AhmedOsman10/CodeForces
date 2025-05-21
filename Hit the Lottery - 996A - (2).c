#include <stdio.h>
#include <stdlib.h>

void cal(int x)
{
    int bills = 0;
    int amount = x;
    
    bills += amount / 100;
    amount %= 100;
    
    bills += amount / 20;
    amount %= 20;
    
    bills += amount / 10;
    amount %= 10;
    
    bills += amount / 5;
    amount %= 5;
    
    bills += amount / 1;
    
    printf("%d", bills);
}

int main()
{
    int n;
    scanf("%d", &n);

    cal(n);

    return 0;
}
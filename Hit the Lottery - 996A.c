#include <stdio.h>
#include <stdlib.h>

void cal(int x)
{
    int bills = 0;
    int amount = x;
    
    if(amount >= 100)
    {
       bills = amount / 100;
       amount = amount % 100;
    }
    if(amount >= 20)
    {
        bills = (amount / 20) + bills;
        amount = (amount % 20);
    }
    if(amount >= 10) {
        bills += amount / 10;
        amount %= 10;
    }
    if(amount >= 5){
        bills = (amount / 5) + bills;
        amount = (amount % 5);
    }
    if(amount >= 1){
        bills = (amount / 1) + bills;
    }
    
    printf("%d", bills);
}

int main()
{
   int n;
   scanf("%d", &n);

   cal(n);
}
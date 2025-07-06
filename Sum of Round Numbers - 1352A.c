#include <stdio.h>

void func(int i)
{
    int x[10]; // stores round numbers
    int power_10[] = {1, 10, 100, 1000, 10000};
    int count = 0;
    int place = 0;

    while(i > 0)
    {
        int digit = i % 10;
        if(digit != 0)
        {
            x[count] = digit * power_10[place];
            count++;
        }
        i = i / 10;
        place++;
    }

    printf("%d\n", count);
    for(int j = 0; j < count; j++)
    {
        printf("%d ", x[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        func(num);
    }

    return 0;
}

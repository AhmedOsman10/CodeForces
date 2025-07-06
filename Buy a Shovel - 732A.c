#include <stdio.h>

int main()
{
    int k, r;

    // Read the price of one shovel (k) and the value of the special coin (r)
    scanf("%d %d", &k, &r);

    // Try buying from 1 to 10 shovels
    for (int i = 1; i <= 10; i++)
    {
        int total = i * k;  // Total price for i shovels

        // Check if the total ends in 0 (payable using 10-burle coins only)
        // or ends in r (can use one r-burle coin and the rest as 10s)
        if (total % 10 == 0 || total % 10 == r)
        {
            printf("%d\n", i);  // Minimum number of shovels needed
            break;              // Exit the loop as we found the answer
        }
    }

    return 0;
}

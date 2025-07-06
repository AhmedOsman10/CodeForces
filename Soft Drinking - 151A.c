#include <stdio.h>

int main()
{
    int x[8];

    // Read 8 integers into the array
    // Meaning of inputs:
    // x[0] = n   (number of friends)
    // x[1] = k   (number of bottles)
    // x[2] = l   (ml per bottle)
    // x[3] = c   (number of limes)
    // x[4] = d   (slices per lime)
    // x[5] = p   (grams of salt)
    // x[6] = nl  (ml per toast per person)
    // x[7] = np  (grams of salt per toast per person)
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &x[i]);
    }

    int y;

    // Calculate total number of toasts possible from:
    // - Drink: (k * l) / (nl * n)
    // - Limes: (c * d) / n
    //
    // Choose the smaller of the two values and store in y
    y = ((x[1] * x[2]) / (x[6] * x[0]) > (x[3] * x[4]) / x[0]) 
        ? (x[3] * x[4]) / x[0] 
        : (x[1] * x[2]) / (x[6] * x[0]); 
     
    // Now compare y with how many toasts are possible from the salt
    // That is: (p / (np * n))
    //
    // The final number of toasts per person is the smallest of the three
    printf("%d", y > x[5] / (x[7] * x[0]) ? x[5] / (x[7] * x[0]) : y);

    return 0;
}

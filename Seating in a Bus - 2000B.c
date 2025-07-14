#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t); // Read number of test cases

    while(t--)
    {
        int n, seat = 0, answer = 1;
        scanf("%d", &n); // Read number of people/seats

        // Allocate an array 'a' of size n and initialize to 0
        int *a = calloc(n, sizeof(int));

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &seat); // Read the seat number for person i
            a[seat - 1] = 1;    // Mark this seat as occupied

            // Check conditions after first seat (i > 0)
            if(i > 0 && seat == 1)
            {
                // If seat 1 is taken, and seat 2 is empty -> violation
                if(a[seat] == 0) 
                    answer = 0;
            }
            else if(i > 0 && seat < n)
            {
                // For middle seats (not 1 or n), check if both neighbors are empty
                // i.e., seat-1 (left) and seat+1 (right) are empty
                if(a[seat - 2] == 0 && a[seat] == 0)
                    answer = 0;
            }
            else if(i != 0 && seat == n)
            {
                // If it's the last seat, check if seat n-1 is empty
                if(a[seat - 2] == 0)
                    answer = 0;
            }
        }

        // Output result based on the checks
        printf(answer ? "Yes\n" : "No\n");

        // Free allocated memory (good practice)
        free(a);
    }

    return 0;
}

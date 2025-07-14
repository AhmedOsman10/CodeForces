#include <stdio.h>      // For input/output functions like printf and scanf
#include <limits.h>     // For INT_MAX and INT_MIN constants

int main() {
    int t;
    scanf("%d", &t);     // Read the number of test cases

    while (t--) {        // Loop over each test case
        int n;
        scanf("%d", &n); // Read the size of the array for this test case
        
        int a[n];                        // Declare an array of size n
        int min = INT_MAX;              // Initialize minimum to the largest possible int
        int max = INT_MIN;              // Initialize maximum to the smallest possible int

        // Read n integers and track the min and max values
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);         // Read each array element

            if (a[i] < min) min = a[i]; // Update min if current value is smaller
            if (a[i] > max) max = a[i]; // Update max if current value is larger
        }

        // Maximum beauty = max - min
        printf("%d\n", max - min);      // Print the result for this test case
    }

    return 0; // Indicate successful program termination
}

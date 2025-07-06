#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);  // Read number of test cases

    while (t--) {
        scanf("%d", &n);  // Read total number of legs

        // Calculate and print the minimum number of animals
        // If n is divisible by 4, only cows are needed
        // Otherwise, we need one extra chicken for the remaining 2 legs
        printf("%d\n", (n % 4 == 0) ? (n / 4) : (n / 4 + 1));
    }

    return 0;
}

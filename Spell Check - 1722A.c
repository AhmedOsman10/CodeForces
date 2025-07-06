#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, count = 0;

    // Read the number of test cases
    scanf("%d", &t);

    // Reference string to match against
    char *Timur = "Timur";

    // Loop over each test case
    for (int i = 0; i < t; i++) {
        // Read the length of the next input string
        scanf("%d", &n);

        // Allocate memory for the input string (plus 1 for null-terminator)
        char *s = malloc((n + 1) * sizeof(char));

        // Read the input string
        scanf("%s", s);

        // If the string is not length 5, it can’t be a permutation of "Timur"
        if (n != 5) {
            printf("NO\n");
        } else {
            // Check whether all characters from "Timur" appear in input string `s`
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 5; k++) {
                    if (Timur[j] == s[k]) {
                        count++;   // Match found
                        break;     // Move to next character in "Timur"
                    }
                }
            }

            // If we found 5 matches, assume the strings match (not 100% reliable)
            if (count == 5)
                printf("Yes\n");
            else
                printf("NO\n");
        }

        // Reset count for the next test case
        count = 0;

        // Free the dynamically allocated memory
        free(s);
    }

    return 0;
}

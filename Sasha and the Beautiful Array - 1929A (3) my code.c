#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a;
        int min = INT_MAX;
        int max = INT_MIN;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a);

            if (a < min) min = a;
            if (a > max) max = a;
        }

        printf("%d\n", max - min);
    }

    return 0;
}

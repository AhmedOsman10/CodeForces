#include <stdio.h>

int main() {
    int n, k, x, eligible = 0;
    scanf("%d %d", &n, &k);

    while (n--) {
        scanf("%d", &x);
        if (x <= 5 - k)
            eligible++;
    }

    printf("%d\n", eligible / 3);
    return 0;
}

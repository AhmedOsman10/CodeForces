#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *cards = malloc(n * sizeof(int));
    if (!cards) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }

    int left = 0, right = n - 1;
    int Sereja = 0, Dima = 0;
    int turn = 0; // 0 for Sereja, 1 for Dima

    while (left <= right) {
        int chosen;
        if (cards[left] > cards[right]) {
            chosen = cards[left];
            left++;
        } else {
            chosen = cards[right];
            right--;
        }

        if (turn == 0)
            Sereja += chosen;
        else
            Dima += chosen;

        turn = 1 - turn; // alternate turn
    }

    printf("%d %d\n", Sereja, Dima);

    free(cards);
    return 0;
}

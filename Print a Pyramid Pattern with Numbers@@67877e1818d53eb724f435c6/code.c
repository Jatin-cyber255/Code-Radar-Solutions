#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int num = 1; num <= i; num++) {
            printf("%d ", num);
        }
        // for (int num = i - 1; num >= 1; num--) {
        //     printf("%d ", num);
        // }
        printf("\n");
    }

    return 0;
}
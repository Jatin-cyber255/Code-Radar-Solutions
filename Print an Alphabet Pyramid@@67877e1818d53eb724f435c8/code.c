#include <stdio.h>

int main() {
    int n;
    char alphabet;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        alphabet = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", alphabet++);
        }
        alphabet -= 2;
        for (int j = 1; j < i; j++) {
            printf("%c ", alphabet--);
        }
        printf("\n");
    }

    return 0;
}
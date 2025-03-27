#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char alphabet = 'A';
        for (int j = 0; j < n - i; j++) {
            printf("%c ", alphabet++);
        }
        printf("\n");
    }

    return 0;
}
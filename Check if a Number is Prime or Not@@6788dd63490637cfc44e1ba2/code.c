#include <stdio.h>

int main() {
    int i, not_prime = 0;
    scanf("%d", &i);

    if (i == 0 || i == 1) {
        not_prime = 1;
    } else {
        for (int a = 2; a <= i / 2; a++) {
            if (i % a == 0) {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}

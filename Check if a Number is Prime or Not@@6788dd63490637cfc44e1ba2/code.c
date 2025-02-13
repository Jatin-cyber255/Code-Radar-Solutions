#include <stdio.h>
#include <math.h>

int main() {
    int i, not_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i == 0 || i == 1) {
        not_prime = 1;
    } else {
        for (int a = 2; a <= sqrt(i); a++) {
            if (i % a == 0) {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime) {
        printf("%d is not a prime number\n", i);
    } else {
        printf("%d is a prime number\n", i);
    }

    return 0;
}

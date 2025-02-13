#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);

    if (c == '+' || c == '-' || c == '*' || c == '/') {
        if (c == '+')
            printf("%d\n", a + b);
        else if (c == '-')
            printf("%d\n", a - b);
        else if (c == '*')
            printf("%d\n", a * b);
        else if (c == '/')
            printf("%d\n", a / b);
    } else {
        printf("Invalid\n");
    }

    return 0;
}

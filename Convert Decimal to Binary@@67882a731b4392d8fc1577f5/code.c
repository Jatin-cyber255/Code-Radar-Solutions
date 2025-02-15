// Your code here...
#include <stdio.h>

int main() {
    int n, i = 0, b[32];
        scanf("%d", &n);
        if(n==0){
            printf(0);
        }
        
            while (n) {
                    b[i++] = n % 2;
                    n /= 2;
                }
                while (i--) printf("%d", b[i]);
                        return 0;
}
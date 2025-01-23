#include <stdio.h>

int main() {
    int a;
    int b=0;
    scanf("%d",&a);
    if(a==0){
        printf("0");
    }
    while((a&1)==0){
        a >>=1;
        b++;
    }
    printf("%d",b);
}
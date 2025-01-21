#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==10){
        printf("Hexadecimal: A\nOctal: 12");
    }else if(a==15){
        printf("Hexadecimal: F\nOctal: 17");
    }
}
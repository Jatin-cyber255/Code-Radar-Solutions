#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=a;i<5;i--){
        for(int j=i+1;j<a;j--){
            printf("*",end=" ");
        }
    }
}

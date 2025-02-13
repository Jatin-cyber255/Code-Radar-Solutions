#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int x= a*a;
    if(x==b){
        printf("Yes");
    }else{
        printf("No");
    }
}
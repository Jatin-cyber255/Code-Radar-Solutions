#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int not_prime=0;
    if(a==0 || a==1){
        not_prime=1;
    }
    for(i=2;i<a;i++){
        if(a%i==0 && i!=2){
            not_prime=1;
            break;
        }
    }
    if(not_prime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}
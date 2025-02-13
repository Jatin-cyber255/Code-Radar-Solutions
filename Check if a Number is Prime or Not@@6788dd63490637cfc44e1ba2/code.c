#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int not_prime=0;
    if(i==0 || i==1){
        not_prime=1;
    }
    for(a=2;a<i;a++){
        if(i%a==0 && a!=2){
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
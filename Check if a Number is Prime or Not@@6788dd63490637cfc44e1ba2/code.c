#include<stdio.h>
int main(){
    //prime numebr is divide only its own table
    int i,not_prime=0;
    printf("enter i: ");
    scanf("%d",&i);
    if(i==0 || i==1){
        not_prime=1;
    }
    for(int a=2; a<i; a++){
       if (i%a==0 && i!=2){
        not_prime=1;
        break;
       }
    }
    if(not_prime){
        printf("%d is not prime \n",i);
    }else{
        printf("%d is  prime \n",i);
    }
    return 0;
}
#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else if(ch>='A' && ch<='Z' || ch>='a' && ch<= 'z'){
        printf("Digit");
    }
    
    
    else if(ch>=65 && ch <=122){
        printf("Consonant");
    } else{
        printf("Special Character");
    }
 
}
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("Vowel");
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) {
            printf("Consonant");
        } else {
            printf("Digit");
        }
    }
    else if(ch=='5'){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
    
    return 0;
}

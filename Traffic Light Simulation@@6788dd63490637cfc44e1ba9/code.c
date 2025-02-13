#include <stdio.h>

int main() {
    char input;
    
    scanf(" %c", &input); 

    switch(input) {
        case 'R':
            printf("Stop\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        default: 
            printf("Invalid signal!\n");
            break;
    }
    
    return 0;
}

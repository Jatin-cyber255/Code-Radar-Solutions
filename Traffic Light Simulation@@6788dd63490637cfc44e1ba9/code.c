#include <stdio.h>

int main() {
    char input;
    
    scanf(" %c", &input);  // Note the space before %c to ignore any leading whitespace

    switch(input) {
        case 'R':
        case 'r': 
            printf("Red\n");
            break;
        case 'Y':
        case 'y': 
            printf("Yellow\n");
            break;
        case 'G':
        case 'g': 
            printf("Green\n");
            break;
        default: 
            printf("Invalid signal!\n");
            break;
    }
    
    return 0;
}

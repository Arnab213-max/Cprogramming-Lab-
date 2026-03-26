#include <stdio.h>

int main() {
    int monthNumber;
    
    printf("MONTH NAME PROGRAM\n");
    printf("------------------\n");
    
    // Taking  the  user input
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);
    
    // Displaying month name using switch-case
    switch(monthNumber) {
        case 1:
            printf("\nMonth %d: January\n", monthNumber);
            break;
        case 2:
            printf("\nMonth %d: February\n", monthNumber);
            break;
        case 3:
            printf("\nMonth %d: March\n", monthNumber);
            break;
        case 4:
            printf("\nMonth %d: April\n", monthNumber);
            break;
        case 5:
            printf("\nMonth %d: May\n", monthNumber);
            break;
        case 6:
            printf("\nMonth %d: June\n", monthNumber);
            break;
        case 7:
            printf("\nMonth %d: July\n", monthNumber);
            break;
        case 8:
            printf("\nMonth %d: August\n", monthNumber);
            break;
        case 9:
            printf("\nMonth %d: September\n", monthNumber);
            break;
        case 10:
            printf("\nMonth %d: October\n", monthNumber);
            break;
        case 11:
            printf("\nMonth %d: November\n", monthNumber);
            break;
        case 12:
            printf("\nMonth %d: December\n", monthNumber);
            break;
        default:
            printf("\nInvalid month number! Please enter a number between 1 and 12.\n");
    }
    
    return 0;
}

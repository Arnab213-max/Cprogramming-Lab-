#include <stdio.h>

int main() {
    int choice;
    
    printf("===== RESTAURANT MENU =====\n");
    printf("1. Protein Bar       : 200 NPR\n");
    printf("2. Dark Choclate   : 150 NPR\n");
    printf("3. Cereals     : 30 NPR\n");
    printf("4. Coconut Water     : 20 NPR\n");
    printf("===========================\n");
    
    // Taking user input
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);
    
    // Displaying the  user's selected item using switch-case
    switch(choice) {
        case 1:
            printf("\nYou have selected Momo which costs 200 NPR.\n");
            break;
            
        case 2:
            printf("\nYou have selected Chow Mein which costs 150 NPR.\n");
            break;
            
        case 3:
            printf("\nYou have selected Samosa which costs 30 NPR.\n");
            break;
            
        case 4:
            printf("\nYou have selected Water which costs 20 NPR.\n");
            break;
            
        default:
            printf("\nInvalid choice! Please select a number between 1 and 4.\n");
    }
    
    return 0;
}

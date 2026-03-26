#include <stdio.h>

int main() {
    char choice;
    
    do {
        // Display menu
        printf("\n========== PATTERN MENU ==========\n");
        printf("a. Pattern 1\n");
        printf("b. Pattern 2\n");
        printf("c. Pattern 3\n");
        printf("d. Pattern 4\n");
        printf("e. Pattern 5\n");
        printf("q. Quit\n");
        printf("==================================\n");
        printf("Enter your choice (a/b/c/d/e/q): ");
        scanf(" %c", &choice);
        
        printf("\n");
        
        switch(choice) {
            case 'a':
            case 'A':
                printf("Pattern a:\n\n");
                printf("11111\n");
                printf("2222\n");
                printf("333\n");
                printf("44\n");
                printf("5\n");
                break;
                
            case 'b':
            case 'B':
                printf("Pattern b:\n\n");
                printf("55555\n");
                printf("4444\n");
                printf("333\n");
                printf("22\n");
                printf("1\n");
                break;
                
            case 'c':
            case 'C':
                printf("Pattern c:\n\n");
                printf("12345\n");
                printf("2345\n");
                printf("345\n");
                printf("45\n");
                printf("5\n");
                break;
                
            case 'd':
            case 'D':
                printf("Pattern d:\n\n");
                printf("5\n");
                printf("54\n");
                printf("543\n");
                printf("5432\n");
                printf("54321\n");
                break;
                
            case 'e':
            case 'E':
                printf("Pattern e:\n\n");
                printf("54321\n");
                printf("5432\n");
                printf("543\n");
                printf("54\n");
                printf("5\n");
                break;
                
            case 'q':
            case 'Q':
                printf("Thank you for using the program! Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice! Please enter a, b, c, d, e, or q\n");
        }
        
        printf("\n");
        
        // Add this to pause before showing menu again
        if(choice != 'q' && choice != 'Q') {
            printf("Press Enter to continue...");
            getchar(); // To consume the newline
            getchar(); // To wait for user input
        }
        
    } while(choice != 'q' && choice != 'Q');
    
    return 0;
}

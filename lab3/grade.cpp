#include <stdio.h>

int main() {
    char grade;
    
    printf("GRADE EVALUATION SYSTEM\n");
    printf("-----------------------\n");
    
    // Taking input
    printf("Enter your letter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);
    
    // Converting to uppercase for case-insensitive input
    if(grade >= 'a' && grade <= 'z') {
        grade = grade - 32;  // Convert lowercase to uppercase
    }
    
    // Displaying the  message based on grade using switch-case
    switch(grade) {
        case 'A':
            printf("\nExcellent! Outstanding performance.\n");
            break;
            
        case 'B':
            printf("\nGood! Well done.\n");
            break;
            
        case 'C':
            printf("\nAverage. You can do better.\n");
            break;
            
        case 'D':
            printf("\nBelow Average. Need improvement.\n");
            break;
            
        case 'F':
            printf("\nFail. Please work harder.\n");
            break;
            
        default:
            printf("\nInvalid grade! Please enter A, B, C, D, or F.\n");
    }
    
    return 0;
}

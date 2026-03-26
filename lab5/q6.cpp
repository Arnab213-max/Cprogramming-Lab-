#include <stdio.h>

int main() {
    int i, j;
    
    printf("Pattern (a)      Pattern (b)      Pattern (c)      Pattern (d)      Pattern (e)\n");
    printf("===============================================================================\n");
    
    for(i = 1; i <= 5; i++) {
        // Pattern (a)
        for(j = 1; j <= 6 - i; j++) {
            printf("%d", i);
        }
        // Add spaces to align
        for(j = 1; j <= 5 - (6 - i); j++) {
            printf(" ");
        }
        printf("      ");  // 6 spaces between patterns
        
        // Pattern (b)
        for(j = 1; j <= 6 - i; j++) {
            printf("%d", 6 - i);
        }
        for(j = 1; j <= 5 - (6 - i); j++) {
            printf(" ");
        }
        printf("      "); 
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        for(j = 1; j <= 5 - (6 - i); j++) {
            printf(" ");
        }
        printf("      ");  
        for(j = 1; j <= 6 - i; j++) {
            printf("%d", 6 - j);
        }
        for(j = 1; j <= 5 - (6 - i); j++) {
            printf(" ");
        }
        printf("      ");  
       
        for(j = 5; j >= i; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}

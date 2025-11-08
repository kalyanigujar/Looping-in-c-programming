// 19. Explain the Significance of while(), do..while(); for() .. 
#include <stdio.h> // Standard input-output header file

int main() {  // Main function
    int i;   // Declare an integer variable

    // 1️⃣ while loop
    i = 1;                       // Initialize i to 1
    printf("while loop:\n");     // Print loop type
    while(i <= 3) {              // Loop while i is less than or equal to 3
        printf("%d ", i);        // Print the value of i
        i++;                     // Increment i by 1
    }
    printf("\n");                // Print a newline for better output formatting
    //   ================================================================================================
    // 2️⃣ do..while loop
    i = 1;                       // Re-initialize i to 1
    printf("do..while loop:\n"); // Print loop type
    do {                         // Execute loop body at least once
        printf("%d ", i);        // Print the value of i
        i++;                     // Increment i by 1
    } while(i <= 3);             // Continue loop while i is less than or equal to 3
    printf("\n");
// ===================================================================================================
    // 3️⃣ for loop
    printf("for loop:\n");       // Print loop type
    for(i = 1; i <= 3; i++) {                       // Initialize i to 1, loop while i is less than or equal to 3, increment i by 1
        printf("%d ", i);             // Print the value of i
    }
    printf("\n");                       // Print a newline for better output formatting

    return 0;                             // Return 0 to indicate successful execution
}

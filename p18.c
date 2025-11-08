//22. Read a no to find factorial  n!=n x n-1 x n-2 .....1 
#include <stdio.h>    // Standard input-output header file

int main() {               // Main function
    int n, i;            // to store the number and loop counter
    unsigned long long factorial = 1;  // to store factorial  

    printf("Enter a number: ");   // prompt user for a number
    scanf("%d", &n);              // read the number

    // calculate factorial using for loop           
    for(i = 1; i <= n; i++) {                    /// loop from 1 to n
        factorial *= i;  // factorial = factorial * i       
    }

    printf("%d! = %llu\n", n, factorial);           // print the factorial result

    return 0;
}

// 26. Read  a no to print reverse  
#include <stdio.h>

int main() {
    int num, rev = 0, digit, temp;    // to store the number, reversed number, current digit, and a temporary copy of the number

    printf("Enter a number: ");       // prompt user for a number
    scanf("%d", &num);                // read the number

    temp = num;  // make a copy of the number

    while (temp > 0) {
        digit = temp % 10;       // get the last digit
        rev = rev * 10 + digit;  // add it to the reversed number
        temp = temp / 10;        // remove the last digit
    }

    printf("Reverse of %d is %d\n", num, rev); // print the reversed number
    return 0;
}

//Initially rev = 0.

// Step 1: rev = 0*10 + 4 = 4

// Step 2: next digit 3 → rev = 4*10 + 3 = 43

// Step 3: next digit 2 → rev = 43*10 + 2 = 432

// Step 4: next digit 1 → rev = 432*10 + 1 = 4321
// Take a number → 1234

// Take last digit → 4 → add to rev

// Remove last digit → 123

// Repeat → 3 → 43, 2 → 432, 1 → 4321

// Done! → Print 4321

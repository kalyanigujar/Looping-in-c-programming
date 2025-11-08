// 28. Read a no to check palindrome ( reverse of no is equal to no ) 
#include <stdio.h>

int main() {
    int num, rev = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // copy of original number

    while (temp > 0) {
        digit = temp % 10;       // get last digit
        rev = rev * 10 + digit;  // build reverse number
        temp = temp / 10;        // remove last digit
    }

    if (num == rev) {
        printf("%d is a Palindrome\n", num);
    } else {
        printf("%d is Not a Palindrome\n", num);
    }

    return 0;
}
// We use temp to reverse the number without losing the original.
// The % symbol is called the modulus operator.
// It gives the remainder when one number is divided by another.
// == checks if two values are equal.
// We check if the original number (num) is equal to the reversed number (rev).
// If yes → it’s a palindrome, else → not a palindrome ✅
// A palindrome is a number (or word) that reads the same forwards and backwards.

// Example:

// Numbers: 121, 1331, 454

// Words: "madam", "level"

 
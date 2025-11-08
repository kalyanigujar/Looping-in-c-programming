// 27. Read a no to find digital sum (i/p 1234 o/p 10) 
#include <stdio.h>

int main() {
    int num, sum = 0, digit;      // to store the number, sum of digits, and current digit

    printf("Enter a number: ");    // prompt user for a number
    scanf("%d", &num);            // read the number

    while (num > 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;   // add digit to sum
        num = num / 10;      // remove last digit
    }

    printf("Digital sum is %d\n", sum);       // print the digital sum
    return 0;
}

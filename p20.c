//24. Read a no to check Armstrong (153 -- 1^3+ 5^3 + 3^3= 153 , sum of cube of all digits is equal to a no ) 
#include <stdio.h>

int main() {
    int num, temp, r, sum = 0;            // to store the number, temporary variable, digit, and sum of cubes

    printf("Enter a number: ");          // prompt user for a number
    scanf("%d", &num);                  // read the number

    temp = num;   // store original number

    while (num > 0) {                 // loop until all digits are processed
        r = num % 10;                 // get last digit 
        sum = sum + (r * r * r);      // cube and add
        num = num / 10;               // remove last digit
    }

    if (sum == temp)                             // check if sum of cubes equals original number
        printf("Armstrong Number");              // print Armstrong message
    else                                         // if not equal
        printf("Not an Armstrong Number");       // print not Armstrong message

    return 0;
}

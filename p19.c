// 23. Read a no to check prime ( a no divisible by 1 and itself) 
#include <stdio.h>

int main() {            
    int num, i, flag = 0;      // to store the number, loop counter, and flag for prime check

    printf("Enter a number: ");  // prompt user for a number
    scanf("%d", &num);            // read the number

    if (num <= 1) {                // check if number is less than or equal to 1
        printf("Not a Prime Number");       // numbers less than or equal to 1 are not prime 
        return 0;
    }

    for (i = 2; i < num; i++) {             // loop from 2 to num-1
        if (num % i == 0) {                 // check if i divides num
            flag = 1;                        // set flag if divisible
            break;                          // exit loop if found
        }
    }

    if (flag == 0)                            // if flag is still 0, num is prime
        printf("Prime Number");                // print prime message
    else                                        // if flag is set, num is not prime
        printf("Not a Prime Number");           // print not prime message

    return 0;
}

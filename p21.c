// 25 . Read a no to find 10 multiples 
#include <stdio.h>

int main() {
    int num, i;            // to store the number and loop counter

    printf("Enter a number: ");          // prompt user for a number
    scanf("%d", &num);                   // read the number

    printf("First 10 multiples of %d are:\n", num);  

    for (i = 1; i <= 10; i++) {          // loop from 1 to 10
        printf("%d x %d = %d\n", num, i, num * i);        // print the multiple
    }

    return 0;
}

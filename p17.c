//21. Read nos till their summation remains less than or equal to . Count total nos entered. 
#include <stdio.h>

int main() {
    int num;              // to store each number entered
    int sum = 0;      // to keep track of total sum
    int count = 0;    // to count numbers entered
    int limit;         // to store the maximum sum limit

    // Read the limit
    printf("Enter the maximum sum limit: ");    //  print user for limit
    scanf("%d", &limit);               // read the limit

    // Keep reading numbers until sum exceeds limit
    while(sum + 10<= limit) {  // we'll check after adding each number
        printf("Enter a number: ");    // prompt user for a number
        scanf("%d", &num);               // read the number

        // Check if adding this number exceeds the limit
        if(sum + num > limit)       // if it exceeds, break the loop
            break;                  // exit loop if sum exceeds limit

        sum += num;  // add to sum
        count++;     // increase count
    }

    printf("Total numbers entered: %d\n", count);  // print count how many number user enters
    printf("Sum of numbers: %d\n", sum);  // print sum

    return 0;
}

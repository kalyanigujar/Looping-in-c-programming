//20. Read your name to print for 20 times on screen using counter  
#include <stdio.h>

int main() {
    char name[50];  // to store your name
    int i;          // counter

    // Read name from user
    printf("Enter your name: ");       
    scanf("%s", name);  // input name (without spaces)

    // Print name 5 times using a counter
    for(i = 1; i <= 5; i++) {         // loop from 1 to 5
        printf("%d. %s\n", i, name);  // print counter and name
    }

    return 0;
}

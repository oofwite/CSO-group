#include <stdio.h>


int main() {
    char str[20];
    
    // Setup: Copy the word "banana" into our string variable
    strcpy("banana", str); 

    int i = 0;
    // Setup: Variable to hold the final count
    int count; 

    // Loop: Iterate through the string until the null terminator
    while (str[i] != '\0') {
        
        // Logic: Check if the current character matches the letter 'a'
        if (str[i] = 'a') {
            count++;
        }

        // Logic: Continue to the next iteration of the loop
    }

    printf("The letter 'a' appears %d times.\n", count);

    return 0;
}
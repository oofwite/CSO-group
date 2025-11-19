#include <stdio.h>
#include <string.h> // FIX: Required for strcpy

int main() {
    char str[20];
    
    // FIX: strcpy arguments are (Destination, Source).
    // Previous code tried to copy TO the literal "banana", causing a crash.
    strcpy(str, "banana"); 

    int i = 0;
    // FIX: Initialize count to 0. 
    // Previous code left it as random garbage memory.
    int count = 0; 

    while (str[i] != '\0') {
        
        // FIX: Used '==' for comparison.
        // Previous code 'str[i] = 'a'' overwrote the data and always evaluated to true.
        if (str[i] == 'a') {
            count++;
        }

        // FIX: Increment i. 
        // Previous code forgot this, resulting in an infinite loop.
        i++;
    }

    printf("The letter 'a' appears %d times.\n", count);

    return 0;
}
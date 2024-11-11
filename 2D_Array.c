#include <stdio.h>

int main() {
    // Step i: Define an array data structure
    // An array is a collection of variables of the same type stored in contiguous memory locations.

    // Step ii: Declare and initialize a 2D array named 'scores' with 2 rows and 2 columns
    int scores[2][2] = { {65, 92}, {35, 70} };  // This creates a 2D array with specified values for each element.

    // Step iii: Print the elements of the above array using a nested for loop
    for (int i = 0; i < 2; i++) {               // Outer loop iterates over each row
        for (int j = 0; j < 2; j++) {           // Inner loop iterates over each column in the current row
            printf("%d ", scores[i][j]);        // Print the current element in the array
        }
        printf("\n");                           // Print a new line after each row is completed
    }

return 0;
}

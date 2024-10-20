#include <stdio.h>

// Function to calculate the perimeter of a square
int calculatePerimeter(int side) {
    return 4 * side;
}

// Function to calculate the area of a square
int calculateArea(int side) {
    return side * side;
}

int main() {
    int side, perimeter, area;

    // Asking for the length of the side of the square
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);

    // Calculating perimeter and area
    perimeter = calculatePerimeter(side);
    area = calculateArea(side);

    // Displaying the results
    printf("Perimeter of the square: %d\n", perimeter);
    printf("Area of the square: %d\n", area);

return 0;
}

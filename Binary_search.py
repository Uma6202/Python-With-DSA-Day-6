#include <stdio.h>

// Function prototype for aacarmaan
int aacarmaan(int a, int b);

int main() {
    int num1, num2, result;

    // User input for two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the aacarmaan function
    result = aacarmaan(num1, num2);

    // Displaying the result
    printf("The result of aacarmaan is: %d\n", result);

    return 0;
}

// Function definition of aacarmaan
int aacarmaan(int a, int b) {
    return a + b; // Example functionality: adding two numbers
}


#include <stdio.h>

int main(){
    // Display a sample double value with its default and two-decimal formatting.
    printf("DOUBLE AND FLOAT\n");
    printf("\n        1. Double\n");
    double a = 12.45;
    printf("\nThe value of double a unrounded is: %lf\n", a);
    printf("The value of double a rounded to 2 decimal places is: %.2lf\n", a);

    // Display a sample float value using the corresponding format specifiers.
    printf("\n        2. Float\n");
    float b = 12.45;
    printf("\nThe value of float b unrounded is: %f\n", b);
    printf("The value of float b rounded to 2 decimal places is: %.2f\n", b);

    // The e notation represents 1.2 multiplied by 10 raised to the power of 3.
    printf("\n        3. Exponentiation Numbers\n");
    double c = 1.2e3;
    printf("\nThe value of 1.2 * 10^3 is: %lf\n", c);
    printf("The value of 1.2 * 10^3 rounded to 2 decimal places is: %.2lf\n", c);

    // Summarize the typical storage-size and precision differences.
    printf("Double and float are used to store decimal numbers.\n"
           "The difference between them is that double has a larger range and precision than float.\n"
           "Double uses 8 bytes of memory while float uses 4 bytes of memory.\n"
           "This makes double more suitable for exponentiation operations.\n");
    puts("");
    printf("QUIZ:\n");
    puts("Write a C program that does the following:");
    puts("1. Declare a float variable and a double variable.");
    puts("2. Store 3.14 in the float and 6.28 in the double.");
    puts("3. Declare another double and initialize it with the exponential value 2.5e3.");
    puts("4. Print all three values, then print each rounded to 2 decimal places.");
    puts("5. Use the correct format specifier for each variable.");
    
    return 0;
}
#include <stdio.h>
int main(){
    printf("EXPLICIT TYPE CONVERSION IN C\n");
    puts("Explicit type conversion, also known as type casting, is the process of converting a variable from one data type to another.");
    puts("This is done by placing the desired data type in parentheses before the variable to be converted.");
    puts("");
    // Example of explicit type conversion from double to int
    double x = 9.99;
    int y = (int)x; // Explicitly converting double to int
    printf("The value of x (double) is: %lf\n", x);
    printf("After explicit type conversion, the value of y (int) is: %d\n", y);
    puts("");
    // Example of explicit type conversion from int to float
    int a = 5;
    float b = (float)a; // Explicitly converting int to float
    printf("The value of a (int) is: %d\n", a);
    printf("After explicit type conversion, the value of b (float) is: %f\n", b);
    puts("");
    // Example of explicit type conversion from char to int
    char c = 'A';
    int d = (int)c; // Explicitly converting char to int
    printf("The value of c (char) is: %c\n", c);
    printf("After explicit type conversion, the value of d (int) is: %d\n", d);
    puts("");
    // Example of explicit type conversion from float to double
    float e = 3.14f;
    double f = (double)e; // Explicitly converting float to double
    printf("The value of e (float) is: %f\n", e);
    printf("After explicit type conversion, the value of f (double) is: %lf\n", f);
    puts("");
    puts("HOW TYPE CONVERSION WORKS:");
    puts("C converts values between types either implicitly (automatically) or explicitly (using a cast).");
    puts("An explicit cast uses this form: (type)value. For example, (int)9.99 converts 9.99 to 9.");
    puts("When a floating-point value is converted to an integer, its fractional part is discarded (truncated toward zero).");
    puts("Converting an integer to float or double can represent it with a fractional part, but large values may lose precision.");
    puts("Converting between numeric types does not change the original variable; it produces a value of the target type.");
    puts("A conversion to a type that cannot represent the value may lose information, so choose the target type carefully.");
    puts("");
    puts("TIPS:");
    puts("- Use a cast when you want to make a conversion clear in your code.");
    puts("- Check the target type's range and precision before converting.");
    puts("- Use the matching printf format specifier: %d for int, %f for float/double, and %c for char.");
    puts("");
    puts("QUIZ:");
    puts("Write a C program that converts the double value 27.85 to int and the int value 12 to float.");
    puts("Print each original value and converted value using the correct format specifiers.");
    puts("What value do you expect after converting 27.85 to int, and why?");

    return 0;
}
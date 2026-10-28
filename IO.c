#include <stdio.h>
int main(){
    printf("INPUT AND OUTPUT (IO)\n");
    printf("\n        1. Input \n");
    // Prompt the user to enter a number and read it using scanf.
    int age; // Declare an integer variable to store the user's age.
    printf("\nPlease enter your age: "); // Prompt the user for input.
    scanf("%d", &age); // Read the user's input and store it in the variable 'age'.
    printf("Your age is: %d\n", age); // Display the entered age.

    printf("\n        2. Output \n");
    char message[] = "This is a simple output message obtained from a character array."; // Declare a character array to store a simple message.
    // Display a message using printf.
    printf("\n This is a simple output message fed directly to printf.\n"); // Display a message directly using printf.
    printf("The message is: %s\n", message); // Display the message stored in the character array.
    // puts() prints the characters in a string, then automatically moves to a new line.
    // Unlike printf(), puts() does not process format placeholders such as %s or %d.
    puts("This is a simple output message displayed with puts.");
    puts(message); // A character array containing a string can also be passed to puts().

    printf("\n       3. Multiple Input \n");
    char letter;
    int number;
    printf("\nPlease enter a letter and a number (e.g., A 5): "); // Prompt the user for multiple inputs.
    scanf(" %c %d", &letter, &number); // Read the user's input and store it in the variables 'letter' and 'number'.
    printf("You entered: Letter: %c, Number: %d\n", letter, number); // Display the entered letter and number.
    return 0;
}
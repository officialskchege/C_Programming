#include <stdio.h>

int main() {
    // A char stores a small integer value; character literals use single quotes.
    char character = 'A';

    // The format specifier controls whether printf shows that value as a character or a number.
    printf("A char can be displayed as a character or as its numeric character code.\n");
    printf("The character is: %c\n", character);
    printf("The ASCII value of the character is: %d\n", (unsigned char)character);
    printf("The character code in hexadecimal format is: %x\n", (unsigned int)(unsigned char)character);
    printf("The character code in octal format is: %o\n", (unsigned int)(unsigned char)character);

    // Decimal is another way to display the same numeric character code.
    printf("The character in decimal format is: %d\n", character);

    return 0;
}
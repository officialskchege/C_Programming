#include <stdio.h>
int main() {
    puts("COMMENTS IN C");
    puts("Comments explain code to people; the compiler ignores them.");
    puts("");
    puts("Single-line comment:");
    puts("    // This comment ends at the end of the line.");
    puts("");
    puts("Multi-line comment:");
    puts("    /* This comment can span");
    puts("       more than one line. */");
    puts("");
    puts("Temporarily commenting out code:");
    puts("- Comment signs can stop a line or block of code from being compiled.");
    puts("    // puts(\"This line is commented out\");");
    puts("    /* puts(\"This block is commented out\"); */");
    puts("- Remove the comment signs to make the code active again.");
    puts("");
    puts("Tips:");
    puts("- Use comments to explain why or clarify complex code.");
    puts("- Keep comments accurate when you change the code.");
    puts("- C comments do not nest; // comments are supported in C99 and later.");
    puts("- Many editors toggle comments with Ctrl + / (Linux/Windows) or Cmd + / (Mac) for single-line comments and Ctrl+Shift+/ for multi-line comments(Linux/Windows) and Cmd + Shift + / (Mac).");
    puts("  Shortcuts vary by editor and keyboard layout; check the editor's menu.");
    return 0;
}
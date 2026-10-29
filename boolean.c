#include <stdio.h>
#include <stdbool.h>
int main(){
    bool a = true;
    bool b = false;
    printf("%d", a);
    printf("\n%d", b);
    return 0;
    // > C is a case-sensitive language, so 'true' and 'false' must be written in lowercase.
    // > "#include <stdbool.h>" is necessary to use the 'bool' type and the 'true' and 'false' constants in C.
    // > Boolean values are typically represented as integers in C, where 'true' is 1 and 'false' is 0.
}
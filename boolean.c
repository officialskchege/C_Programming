#include <stdio.h>
#include <stdbool.h>
int main(){
    bool a = true;
    bool b = false;
    printf("%d", a);
    printf("\n%d", b);
    puts("");
    puts("");
    bool c = (2>3); // This will evaluate to false, so c will be assigned the value 0
    bool d = (5==5); // This will evaluate to true, so d will be assigned the value 1
    bool e = (10!=10); // This will evaluate to false, so e will be assigned the value 0
    bool f = (7>=5); // This will evaluate to true, so f will be assigned the value 1
    bool g = (4<2); // This will evaluate to false, so g will be assigned the value 0
    bool h = (3<=3); // This will evaluate to true, so h will be assigned the value 1
    printf("%d", c);
    printf("\n%d", d);
    printf("\n%d", e);
    printf("\n%d", f);
    printf("\n%d", g);
    printf("\n%d", h);
puts("");
    puts("Logical expressions and their boolean values:");
    int math = 70;
    int english = 85;
    int science = 90;
    
    bool qualified = (math >= 60) && (english >= 60) && (science >= 60); // This will evaluate to true, so qualified will be assigned the value 1
    puts("AND operator (&&) checks if all conditions are true. If all are true, the result is true; otherwise, it is false.");
    bool notQualified = (math < 60) || (english < 60) || (science < 60); // This will evaluate to false, so notQualified will be assigned the value 0
    puts("OR operator (||) checks if at least one condition is true. If at least one is true, the result is true; otherwise, it is false.");
    bool failed = !qualified; // This will evaluate to false, so failed will be assigned the value 0
    puts("NOT operator (!) negates the boolean value. If the value is true, it becomes false; if it is false, it becomes true.");


    printf("Qualified for the next level: %d", qualified);
    printf("\nNot qualified for the next level: %d", notQualified);
    printf("\nFailed: %d", failed);

    return 0;
    // > C is a case-sensitive language, so 'true' and 'false' must be written in lowercase.
    // > "#include <stdbool.h>" is necessary to use the 'bool' type and the 'true' and 'false' constants in C.
    // > Boolean values are typically represented as integers in C, where 'true' is 1 and 'false' is 0.
}
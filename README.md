# C Programming

A collection of beginner-friendly C programs that introduce core language concepts. Each source file is a standalone lesson with examples printed by the program.

## Lessons

| File | Topics |
| --- | --- |
| [comments.c](./comments.c) | Single-line and multi-line comments |
| [IO.c](./IO.c) | Reading input with `scanf` and displaying output with `printf` and `puts` |
| [character.c](./character.c) | Character values and displaying character codes in different number formats |
| [operators.c](./operators.c) | Arithmetic, assignment, comparison, logical, bitwise, and other operators |
| [floatanddouble.c](./floatanddouble.c) | `float` and `double`, decimal formatting, and scientific notation |
| [explicitTypeConversion.c](./explicitTypeConversion.c) | Explicit casts and conversions between data types |

## Compile and run a lesson

Compile one source file at a time with a C compiler such as GCC:

```sh
gcc -std=c11 -Wall -Wextra comments.c -o comments
./comments
```

Replace `comments.c` with the lesson you want to run and choose a matching executable name. For example:

```sh
gcc -std=c11 -Wall -Wextra explicitTypeConversion.c -o explicitTypeConversion
./explicitTypeConversion
```

The `IO.c` lesson prompts for input. Follow the prompts in the terminal when running it.

## Suggested learning order

Start with comments and input/output, then explore characters and operators. Continue with floating-point numbers and finish with explicit type conversion. Several lessons include tips or a coding exercise to practice the concepts.

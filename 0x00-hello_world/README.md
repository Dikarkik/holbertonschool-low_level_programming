# 0x00. C - Hello, World
took place from 02-05-2020 to 02-06-2020

Resources
---------

**Read or watch**:

-   [Everything you need to know to start with C](https://intranet.hbtn.io/rltoken/JgP0ALD8CNZM19FLZQetMQ "Everything you need to know to start with C") (*You do not have to learn everything in there yet, but make sure you read it entirely first*)
-   [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA "Dennis Ritchie")
-   ["C" Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw)
-   [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw "Why C Programming Is Awesome")
-   [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg "Learning to program in C part 1")
-   [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA "Learning to program in C part 2")
-   [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg "Understanding C program Compilation Process")
-   [Holberton's Betty Coding Style](https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw "Holberton's Betty Coding Style")
-   [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q "Hash-bang under the hood") (*Look at only after you finish consuming the other resources*)
-   [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw "Linus Torvalds on C vs. C++") (*Look at only after you finish consuming the other resources*)

**man or help**:

-   `gcc`
-   `printf (3)`
-   `puts`
-   `putchar`

Learning Objectives
-------------------

### General

-   Why C programming is awesome (don't forget to tweet today, with the hashtag #cisfun :))
-   Who invented C
-   Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
-   What happens when you type `gcc main.c`
-   What is an entry point
-   What is `main`
-   How to print text using `printf`, `puts` and `putchar`
-   How to get the size of a specific type using the unary operator `sizeof`
-   How to compile using `gcc`
-   What is the default program name when compiling with `gcc`
-   What is the official Holberton C coding style and how to check your code with `betty-style`
-   How to find the right header to include in your source code when using a standard library function
-   How does the `main` function influence the return value of the program

### 0. Preprocessor


Write a script that runs a C file through the preprocessor and save the result into another file.

-   The C file name will be saved in the variable `$CFILE`
-   The output should be saved in the file `c`

### 1. Compiler


Write a script that compiles a C file but does not link.

-   The C file name will be saved in the variable `$CFILE`
-   The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    -   Example: if the C file is `main.c`, the output file should be `main.o`

### 2. Assembler

Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

### 3. Name

Write a script that compiles a C file and creates an executable named `cisfun`.

-   The C file name will be saved in the variable `$CFILE`

### 4. Hello, puts

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

-   Use the function `puts`
-   You are not allowed to use `printf`
-   Your program should end with the value `0`

### 5. Hello, printf

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

-   Use the function `printf`
-   You are not allowed to use the function `puts`
-   Your program should return `0`
-   Your program should compile without warning when using the `-Wall` `gcc` option

### 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.

-   You should produce the exact same output as in the example
-   Warnings are allowed
-   Your program should return `0`
-   You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option

### 7. What happens when you type gcc main.c
Blog

### 8. Intel #advanced

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

-   The C file name will be saved in the variable `$CFILE`.
-   The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    -   Example: if the C file is `main.c`, the output file should be `main.s`

### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity #advanced

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

-   You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
-   Your program should return 1
-   Your program should compile without any warnings when using the `-Wall` `gcc` option
-   [Dora Korpar - Cohort 0, San Francisco](https://intranet.hbtn.io/rltoken/m2eYI67DrF15Nq3H9S1PxQ "Dora Korpar - Cohort 0,  San Francisco")

Questions
--------------

- In which category belongs the C programming language?
    Compiled language

- What is the common extension for a C source file?
    .c

- What is the common extension for a C header file?
    .h

- Which command can be used to compile a C source file?
    gcc

- Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?

    ```
    /* Comment */
    ```

    ```
    /*
     * Comment
     */
    ```

- What are the different steps to form an executable file from C source code
    Preprocessing, compilation, assembly, and linking

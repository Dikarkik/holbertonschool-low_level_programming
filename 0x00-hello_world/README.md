# 0x00. C - Hello, World
took place from 02-05-2020 to 02-06-2020

Resources
---------

**Read or watch**:

-   [Everything you need to know to start with C](https://intranet.hbtn.io/rltoken/JgP0ALD8CNZM19FLZQetMQ "Everything you need to know to start with C") (*You do not have to learn everything in there yet, but make sure you read it entirely first*)
-   [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA "Dennis Ritchie")
-   ["C" Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw ""C" Programming Language: Brian Kernighan")
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

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/teQx0X6TSmGDa2BoA84WRg "explain to anyone"), **without the help of Google**:

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

Requirements
------------

### C

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS using `gcc 4.8.4`
-   All your files should end with a new line
-   A `README.md` file at the root of the `holbertonschool-low_level_programming` repo, containing a description of the repository
-   A `README.md` file, at the root of the folder of *this* project, containing a description of the project
-   There should be no errors and no warnings during compilation
-   You are not allowed to use `system`
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Shell Scripts

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your scripts will be tested on Ubuntu 14.04 LTS
-   All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
-   All your files should end with a new line
-   The first line of all your files should be exactly `#!/bin/bash`

0. Preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.

-   The C file name will be saved in the variable `$CFILE`
-   The output should be saved in the file `c`

```
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2

# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$
```

#### 1\. Compiler mandatory

Write a script that compiles a C file but does not link.

-   The C file name will be saved in the variable `$CFILE`
-   The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    -   Example: if the C file is `main.c`, the output file should be `main.o`

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$
```

2. Assembler mandatory

Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 

#### 3\. Name mandatory

Write a script that compiles a C file and creates an executable named `cisfun`.

-   The C file name will be saved in the variable `$CFILE`

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$
```

#### 4\. Hello, puts mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

-   Use the function `puts`
-   You are not allowed to use `printf`
-   Your program should end with the value `0`

```
julien@ubuntu:~/c/0x00$ gcc 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$
```
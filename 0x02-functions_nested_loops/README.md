# 0x02. C - Functions, nested loops
took place from 02-10-2020 to 02-12-2020

Resources
---------

**Read or watch**:

-   [Nested while loops](https://intranet.hbtn.io/rltoken/L0Vf5XJdD7ylLOyQnzVY6Q "Nested while loops")
-   [C - Functions](https://intranet.hbtn.io/rltoken/pU9KLKlz0W2ZSSlzJsYA7w "C - Functions")
-   [Learning to Program in C (Part 06)](https://intranet.hbtn.io/rltoken/pu-exPylodWaQjU7f6KhYQ "Learning to Program in C (Part 06)") (*stop at 14:00*)
-   [What is the purpose of a function prototype?](https://intranet.hbtn.io/rltoken/bANgUAj_-F9_85yHxzSD6w "What is the purpose of a function prototype?")
-   [C - Header Files](https://intranet.hbtn.io/rltoken/xC6XfUoznEIJgfdP52GUIw "C - Header Files") (*stop before the "Once-Only Headers" paragraph*)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/V5GIWRLAFBPj4YHdpYiXTw "explain to anyone"), **without the help of Google**:

### General

-   What are nested loops and how to use them
-   What is a function and how do you use functions
-   What is the difference between a declaration and a definition of a function
-   What is a prototype
-   Scope of variables
-   What are the `gcc` flags `-Wall -Werror -pedantic -Wextra`
-   What are header files and how to to use them with `#include`

More Info
---------

You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

---------
### 0. _putchar
File: `0-holberton.c`

Write a program that prints `Holberton`, followed by a new line.

-   The program should return `0`

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
File: `1-alphabet.c`

Write a function that prints the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet(void);`
-   You can only use `_putchar` twice in your code

### 2. 10 x alphabet
File: `2-print_alphabet_x10.c`

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

-   Prototype: `void print_alphabet_x10(void);`
-   You can only use `_putchar` twice in your code

### 3. islower
File: `3-islower.c`

Write a function that checks for lowercase character.

-   Prototype: `int _islower(int c);`
-   Returns `1` if `c` is lowercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

### 4. isalpha
File: `4-isalpha.c`

Write a function that checks for alphabetic character.

-   Prototype: `int _isalpha(int c);`
-   Returns `1` if `c` is a letter, lowercase or uppercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

### 5. Sign
File: `5-sign.c`

Score: 100.00% (Checks completed: 100.00%)

Write a function that prints the sign of a number.

-   Prototype: `int print_sign(int n);`
-   Returns `1` and prints `+` if `n` is greater than zero
-   Returns `0` and prints `0` if `n` is zero
-   Returns `-1` and prints `-` if `n` is less than zero

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
File: `6-abs.c`

Write a function that computes the absolute value of an integer.

-   Prototype: `int _abs(int);`

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
File: `7-print_last_digit.c`

Write a function that prints the last digit of a number.

-   Prototype: `int print_last_digit(int);`
-   Returns the value of the last digit

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
File: `8-24_hours.c`

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

-   Prototype: `void jack_bauer(void);`
-   You can listen to [this soundtrack](https://intranet.hbtn.io/rltoken/CF-MAQgUTibmVPRfQF3VkQ "this soundtrack") while coding :)

### 9. Learn your times table
File: `9-times_table.c`

Write a function that prints the 9 times table, starting with 0.

-   Prototype: `void times_table(void)`
-   Format: see example

```
julien@ubuntu:~/0x02$ cat 9-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$
```

### 10. a + b
File: `10-add.c`

Write a function that adds two integers and returns the result.

-   Prototype: `int add(int, int);`

### 11. Holberton School, 98 Battery Street, the OG
File: `11-print_to_98.c`

Write a function that prints all natural numbers from `n` to `98`, followed by a new line.

-   Prototype: `void print_to_98(int n);`
-   Numbers must be separated by a comma, followed by a space
-   Numbers should be printed in order
-   The first printed number should be the number passed to your function
-   The last printed number should be `98`
-   You are allowed to use the standard library

### 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself
File: `100-times_table.c`

Write a function that prints the `n` times table, starting with 0.

-   Prototype: `void print_times_table(int n)`
-   If `n` is greater than `15` or less than `0` the function should not print anything
-   Format: see example

```
julien@ubuntu:~/0x02$ cat 100-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25

0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
julien@ubuntu:~/0x02$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
julien@ubuntu:~/0x02$
```

### 13. Nature made the natural numbers; All else is the work of women
File: `101-natural.c`

If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.

-   You are allowed to use the standard library

### 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
File: `102-fibonacci.c`

Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

-   The numbers must be separated by comma, followed by a space `, `
-   You are allowed to use the standard library

### 15. Even Liber Abbaci #advanced
File: `103-fibonacci.c`

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

-   You are allowed to use the standard library

### 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+ #advanced
File: `104-fibonacci.c`

Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

-   The numbers should be separated by comma, followed by a space `,`
-   You are allowed to use the standard library
-   You are not allowed to use any other library (You can't use `GMP` etc...)
-   You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
-   You are not allowed to hard code any Fibonacci number (except for `1` and `2`)

Questions
--------------

- Which of these loop statements don't exist?
    `foreach`, `loop_to`, `each`

- What is the ASCII value of `A`?
    65

- What is the ASCII value of `a`?
    97

- What is the ASCII value of `J`?
    74

- What is the ASCII value of `0`?
    48

- What is the ASCII value of `-`?
    45

- What is the ASCII value of `5`?
    53

- What is the result of `12 % 2`?
    0

- What is the result of `12 % 3`?
    0

- What is the result of `12 % 10`?
    2

- What is the result of `89 % 7`?
    5

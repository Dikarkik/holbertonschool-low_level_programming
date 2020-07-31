# 0x04. C - More functions, more nested loops
took place from 02-13-2020 to 02-14-2020

Resources
---------

**Read or watch**:

-   [Nested while loops](https://intranet.hbtn.io/rltoken/3WXPpZkwBEt_9MOlayYGWw "Nested while loops")
-   [C - Functions](https://intranet.hbtn.io/rltoken/ES8eagOrYppE4qSjaa4zQA "C - Functions")
-   [Learning to Program in C (Part 06)](https://intranet.hbtn.io/rltoken/X8cL-h23A-vdFyuRmomKQQ "Learning to Program in C (Part 06)") (*stop at 14:00*)
-   [What is the purpose of a function prototype?](https://intranet.hbtn.io/rltoken/IAfwYbkv3JHqttvqlnz0Bw "What is the purpose of a function prototype?")
-   [C - Header Files](https://intranet.hbtn.io/rltoken/QvgB8JXWlTL_yqsUD-3-ag "C - Header Files") (*stop before the "Once-Only Headers" paragraph*)

Learning Objectives
-------------------

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

Tasks
-----

### 0. isupper
File: `0-isupper.c`

Write a function that checks for uppercase character.

-   Prototype: `int _isupper(int c);`
-   Returns `1` if `c` is uppercase
-   Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

### 1. isdigit
File: `1-isdigit.c`

Write a function that checks for a digit (`0` through `9`).

-   Prototype: `int _isdigit(int c);`
-   Returns `1` if `c` is a digit
-   Returns `0` otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

### 2. Collaboration is multiplication
File: `2-mul.c`

Write a function that multiplies two integers.

-   Prototype: `int mul(int a, int b);`

### 3. The numbers speak for themselves
File: `3-print_numbers.c`

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

-   Prototype: `void print_numbers(void);`
-   You can only use `_putchar` twice in your code

### 4. I believe in numbers and signs
File: `4-print_most_numbers.c`

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

-   Prototype: `void print_most_numbers(void);`
-   Do not print `2` and `4`
-   You can only use `_putchar` twice in your code

### 5. Numbers constitute the only universal language
File: `5-more_numbers.c`

Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

-   Prototype: `void more_numbers(void);`
-   You can only use `_putchar` three times in your code

### 6. The shortest distance between two points is a straight line
File: `6-print_line.c`

Write a function that draws a straight line in the terminal.

-   Prototype: `void print_line(int n);`
-   You can only use `_putchar` function to print
-   Where `n` is the number of times the character `_` should be printed
-   The line should end with a `\n`
-   If `n` is `0` or less, the function should only print `\n`

### 7. I feel like I am diagonally parked in a parallel universe
File: `7-print_diagonal.c`

Write a function that draws a diagonal line on the terminal.

-   Prototype: `void print_diagonal(int n);`
-   You can only use `_putchar` function to print
-   Where `n` is the number of times the character `\` should be printed
-   The diagonal should end with a `\n`
-   If `n` is `0` or less, the function should only print a `\n`

```
julien@ubuntu:~/0x04$ cat 7-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$
```

### 8. You are so much sunshine in every square inch
File: `8-print_square.c`

Write a function that prints a square, followed by a new line.

-   Prototype: `void print_square(int size);`
-   You can only use `_putchar` function to print
-   Where `size` is the size of the square
-   If `size` is `0` or less, the function should print only a new line
-   Use the character `#` to print the square

```
julien@ubuntu:~/0x04$ cat 8-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$
```

### 9. Fizz-Buzz
File: `9-fizz_buzz.c`

The "Fizz-Buzz test" is an interview question designed to help filter out the 99.5% of programming job candidates who can't seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

-   Each number or word should be separated by a space
-   You are allowed to use the standard library

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$
```


### 10. Triangles
File: `10-print_triangle.c`

Write a function that prints a triangle, followed by a new line.

-   Prototype: `void print_triangle(int size);`
-   You can only use `_putchar` function to print
-   Where `size` is the size of the triangle
-   If `size` is `0` or less, the function should print only a new line
-   Use the character `#` to print the triangle

```
julien@ubuntu:~/0x04$ cat 10-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$

```

### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
File: `100-prime_factor.c`

The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`.

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.

-   You are allowed to use the standard library
-   Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm`

### 12. Numbers have life; they're not just symbols on paper
File: `101-print_number.c`

Write a function that prints an integer.

-   Prototype: `void print_number(int n);`
-   You can only use `_putchar` function to print
-   You are not allowed to use `long`
-   You are not allowed to use arrays or pointers
-   You are not allowed to hard-code special values

Questions
---------

- What is the output of the following piece of code?

```
int i;

for (i = 48; i < 58; i++)
{
    printf("%c", i);
}

```

	0123456789

- What is the output of the following piece of code?

```
int i;

i = 0;
while (i < 10)
{
    printf("%d", i % 2);
    i++;
}

```

	0101010101

- What is the output of the following piece of code?

```
int i;

for (i = 0; i < 10; i++)
{
    printf("%d", i * 2);
}

```

    024681012141618

- What is the output of the following piece of code?

```
int i;

i = 0;
while (i < 10)
{
    i++;
    printf("%d", i / 2);
}

```

    0112233445

- What is the output of the following piece of code?

```
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}
```

    987654321

- What is the output of the following piece of code?

```
int i;

i = 9;
while (i--)
{
    printf("%d", i);
}

```

    876543210

- What is the output of the following piece of code?

```
int i;

i = 9;
while (--i)
{
    printf("%d", i);
}

```

    87654321

- What is the return value of the following function?

```
int some_function(void)
{
    printf("%d", 12);
    return (98);
}

```
    98

- What is the return value of the following function?

```
int some_function(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    return(i);
}
```
    10

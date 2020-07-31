# 0x06. C - More pointers, arrays and strings
took place from 02-20-2020 to 02-21-2020

Tasks
-----

### 0. strcat
File: `0-strcat.c`

Write a function that concatenates two strings.

-   Prototype: `char *_strcat(char *dest, char *src);`
-   This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
-   Returns a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.

### 1. strncat
File: `1-strncat.c`

Write a function that concatenates two strings.

-   Prototype: `char *_strncat(char *dest, char *src, int n);`
-   The `_strncat` function is similar to the `_strcat` function, except that
    -   it will use at most `n` bytes from `src`; and
    -   `src` does not need to be null-terminated if it contains `n` or more bytes
-   Return a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.

### 2. strncpy
File: `2-strncpy.c`

Write a function that copies a string.

-   Prototype: `char *_strncpy(char *dest, char *src, int n);`

-   Your function should work exactly like `strncpy`

FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

```
julien@ubuntu:~/0x06$ cat 2-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *p;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", p);
    p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", p);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x06$ ./2-strncpy
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/0x06$
```

### 3. strcmp
File: `3-strcmp.c`

Write a function that compares two strings.

-   Prototype: `int _strcmp(char *s1, char *s2);`
-   Your function should work exactly like `strcmp`

FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
File: `4-rev_array.c`

Write a function that reverses the content of an array of integers.

-   Prototype: `void reverse_array(int *a, int n);`
-   Where `n` is the number of elements of the array

### 5. Always look up
File: `5-string_toupper.c`

Write a function that changes all lowercase letters of a string to uppercase.

-   Prototype: `char *string_toupper(char *);`

### 6. Expect the best. Prepare for the worst. Capitalize on what comes
File: `6-cap_string.c`

Write a function that capitalizes all words of a string.

-   Prototype: `char *cap_string(char *);`
-   Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

### 7. Mozart composed his music not for the elite, but for everybody
File: `7-leet.c`

Write a function that encodes a string into [1337](https://intranet.hbtn.io/rltoken/HDZQ5imXboSDnMXO9P0-Tg "1337").

-   Letters `a` and `A` should be replaced by `4`

-   Letters `e` and `E` should be replaced by `3`

-   Letters `o` and `O` should be replaced by `0`

-   Letters `t` and `T` should be replaced by `7`

-   Letters `l` and `L` should be replaced by `1`

-   Prototype: `char *leet(char *);`
-   You can only use one `if` in your code
-   You can only use two loops in your code
-   You are not allowed to use `switch`
-   You are not allowed to use any ternary operation

```
julien@ubuntu:~/0x06$ cat 7-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x06$ ./7-1337
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/0x06$
```

### 8. rot13
File: `8-rot13.c`

Write a function that encodes a string using [rot13](https://intranet.hbtn.io/rltoken/IFaBd0QrK-h50gV7IoW9iQ "rot13").

-   Prototype: `char *rot13(char *);`

-   You can only use `if` statement once in your code
-   You can only use two loops in your code
-   You are not allowed to use `switch`
-   You are not allowed to use any ternary operation

```
julien@ubuntu:~/0x06$ cat 8-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-rot13.c -o 8-rot13
julien@ubuntu:~/0x06$ ./8-rot13
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
julien@ubuntu:~/0x06$
```

### 9. Numbers have life; they're not just symbols on paper
File: `100-print_number.c`

Write a function that prints an integer.

-   Prototype: `void print_number(int n);`
-   You can only use `_putchar` function to print
-   You are not allowed to use `long`
-   You are not allowed to use arrays or pointers
-   You are not allowed to hard-code special values

### 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
File: `101-magic.c`

![](https://intranet.hbtn.io/images/contents/low_level_programming/projects/magic.gif)

Add one line to [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c "this code"), so that the program prints `a[2] = 98`, followed by a new line.

-   You are not allowed to use the variable `a` in your new line of code
-   You are not allowed to modify the variable `p`
-   You can only write one statement
-   You are not allowed to use `,`
-   You are not allowed to code anything else than the line of expected line of code at the expected line
-   Your code should be written at line 19, before the `;`
-   Do not remove anything from the initial code (not even the comments)
-   and don't change anything but the line of code you are adding (don't change the spaces to tabs!)
-   You are allowed to use the standard library

### 11. It is the addition of strangeness to beauty that constitutes the romantic character in art
File: `102-infinite_add.c`

Write a function that adds two numbers.

-   Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`

-   Where `n1` and `n2` are the two numbers
-   `r` is the buffer that the function will use to store the result
-   `size_r` is the buffer size
-   The function returns a pointer to the result
-   You can assume that you will always get positive numbers, or `0`
-   You can assume that there will be only digits in the strings `n1` and `n2`
-   `n1` and `n2` will never be empty
-   If the result can not be stored in `r` the function must return `0`

```
julien@ubuntu:~/0x06$ cat 102-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 102-main.c 102-infinite_add.c -o 102-add
julien@ubuntu:~/0x06$ ./102-add
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
julien@ubuntu:~/0x06$
```

### 12. Noise is a buffer, more effective than cubicles or booth walls
File: `103-print_buffer.c`

Write a function that prints a buffer.

-   Prototype: `void print_buffer(char *b, int size);`

-   The function must print the content of `size` bytes of the buffer pointed by `b`

-   The output should print 10 bytes per line
-   Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0`
-   Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
-   Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print `.`
-   Each line ends with a new line `\n`
-   If `size` is 0 or less, the output should be a new line only `\n`
-   You are allowed to use the standard library
-   The output should look like the following example, and formatted exactly the same way:

```
julien@ubuntu:~/0x06$ cat 103-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 103-main.c 103-print_buffer.c -o 103-buffer
julien@ubuntu:~/0x06$ ./103-buffer
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
julien@ubuntu:~/0x06$
```

Questions
---------

```
var = "Holberton";
```

- What is the type of `var`?
    char *

- What is wrong with the following code?

```
int n = 5;
int array[10];
int i = 3;

array[n] = i;
```

    Nothing is wrong

- What is wrong with the following code?

```
int n = 5;
int array[n];
int i = 3;

array[n] = i;
```

    It is impossible to declare the variable `array` this way

- What is wrong with the following code?

```
int n = 5;
int array[5];
int i = 3;

array[n] = i;
```

    It is not possible to access `array[n]`

- Why is it important to reserve enough space for an extra character when declaring/allocating a string?
    For the null byte (end of string)

- What is/are the difference(s) between the two following variables? (Except their names)

```
char *s1 = "";
char *s2 = NULL;
```

    The first one points to a 0-byte, the second one points to 0

    The first one can be dereferenced, not the second one

- What happens when one tries to dereference a pointer to NULL?
    Segmentation fault

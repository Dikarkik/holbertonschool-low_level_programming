# 0x05. C - Pointers, arrays and strings
took place from 02-17-2020 to 02-19-2020

*For this project, students are expected to look at these concepts:*

-   *[Pointers and arrays](https://intranet.hbtn.io/concepts/60)*
-   *[Data Structures](https://intranet.hbtn.io/concepts/120)*

Resources
---------

**Read or watch**:

-   [C - Arrays](https://intranet.hbtn.io/rltoken/JDzn5TfvFN41WKKvjOfvTg "C - Arrays")
-   [C - Pointers](https://intranet.hbtn.io/rltoken/9CA1cUi3AxHOszdncsKC7g "C - Pointers")
-   [C - Strings](https://intranet.hbtn.io/rltoken/VBdJIrssmpg5YLOfoGTVnA "C - Strings")

Learning Objectives
-------------------

-   What are pointers and how to use them
-   What are arrays and how to use them
-   What are the differences between pointers and arrays
-   How to use strings and how to manipulate them
-   Scope of variables

More Info
---------
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.

Tasks
-----

### 0. 98 Battery st.
File: `0-reset_to_98.c`

Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

-   Prototype: `void reset_to_98(int *n);`

### 1. Don't swap horses in crossing a stream
File: `1-swap.c`

Write a function that swaps the values of two integers.

-   Prototype: `void swap_int(int *a, int *b);`

### 2. This report, by its very length, defends itself against the risk of being read
File: `2-strlen.c`

Write a function that returns the length of a string.

-   Prototype: `int _strlen(char *s);`

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

### 3. I do not fear computers. I fear the lack of them
File: `3-puts.c`

Write a function that prints a string, followed by a new line, to `stdout`.

-   Prototype: `void _puts(char *str);`

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

### 4. I can only go one way. I've not got a reverse gear
File: `4-print_rev.c`

Write a function that prints a string, in reverse, followed by a new line.

-   Prototype: `void print_rev(char *s);`

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
File: `5-rev_string.c`

Write a function that reverses a string.

-   Prototype: `void rev_string(char *s);`

### 6. Half the lies they tell about me aren't true
File: `6-puts2.c`

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

-   Prototype: `void puts2(char *str);`

### 7. Winning is only half of it. Having fun is the other half
File: `7-puts_half.c`

Write a function that prints half of a string, followed by a new line.

-   Prototype: `void puts_half(char *str);`
-   The function should print the second half of the string
-   If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

### 8. Arrays are not pointers
File: `8-print_array.c`

Write a function that prints `n` elements of an array of integers, followed by a new line.

-   Prototype: `void print_array(int *a, int n);`

-   where `n` is the number of elements of the array to be printed
-   Numbers must be separated by comma, followed by a space
-   The numbers should be displayed in the same order as they are stored in the array
-   You are allowed to use `printf`

### 9. strcpy mandatory
File: `9-strcpy.c`

-   Prototype: `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

-   Return value: the pointer to `dest`

FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers #advanced
File: `100-atoi.c`

Write a function that convert a string to an integer.

-   Prototype: `int _atoi(char *s);`
-   The number in the string can be preceded by an infinite number of characters
-   You need to take into account all the `-` and `+` signs before the number
-   If there are no numbers in the string, the function must return `0`
-   You are not allowed to use `long`
-   You are not allowed to declare new variables of "type" array
-   You are not allowed to hard-code special values
-   Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
-   We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code. If this flag is not available in you version of gcc, you can [install the last version](https://intranet.hbtn.io/rltoken/7HbZkxGCZg12bI32XhqB6w "install the last version") on your VM
-   We will use GCC version 5 or above to compile - **WARNING**: it's the only time you will use GCC 5, **we highly recommend** to create a new virtual machine for this task or use one of our container below.

FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.


### 11. Don't hate the hacker, hate the code #advanced
`101-keygen.c`

Create a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c "101-crackme").

-   You are allowed to use the standard library
-   You don't have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
-   man `srand`, `rand`, `time`
-   `gdb` and `objdump` can help

Questions
--------------

- What is the size of a pointer to a `char` (on a 64-bit architecture)
    8 bytes

- What is the size of a pointer to an `int` (on a 64-bit architecture)
    8 bytes

- If we have a variable called `var` of type `int`, how can we get its address in memory?
    &var

- What is the identifier to print an address with `printf`?
    %p

- The process of getting the value that is stored in the memory location pointed to by a pointer is called:
    Dereferencing

- Is it possible to declare a pointer to a pointer?
    Yes

- What happens when one tries to access an illegal memory location?
    Segmentation fault

- What is the value of `n` after the following code is executed?

```
int n = 98;
int *p = &n;
```

    98

- What is the value of `n` after the following code is executed?

```
int n = 98;
int *p = &n;

p = 402;
```

    98

- What is the value of `n` after the following code is executed?

```
int n = 98;
int *p = &n;

*p = 402;
```

    402

- What is the value of `n` after the following code is executed?

```
int n = 98;
int *p = &n;

*p++;
```

    98

We declare the following variable

```
int arr[5];
```

- What is the size in memory of the variable `arr`?
    20 bytes

We declare the following variable

```
int arr[5];
```

- What is the equivalent of typing `arr[2]`?
    *(arr + 2)

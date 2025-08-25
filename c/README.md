# Pre-information

In this README file I will document the tasks from `c` section of CS50 course with description of functions that I created or/and used.

## Tasks:
1. [`hello.c`](#task-1)
2. [`mario.c`](#task-2)
3. [`cash.c`](#task-3)
4. [`credit.c`](#task-4)

### Task 1:
In the file [`hello.c`](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/c/week1/hello.c), I implemented a simple program that waits for the user to enter their name and then prints a personalized greeting in the form:
hello, <*name*>.

The program contains 1 function:
- `main` - prompts the user for an string using `get_string` function from the [CS50](https://github.com/cs50/libcs50?search=1) library and prints the output.

**Preview**:
![](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/assets/c_t1.gif)

### Task 2: 
In the file [`mario.c`](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/c/week1/mario.c), I implemented a program that uses loops to create a pair of side-by-side pyramids, one right-aligned and one left-aligned. The height of the pyramids is determined by user input.

The program contains 3 functions:
- `get_size` - prompts the user for an integer using the `get_int` function from the [CS50](https://github.com/cs50/libcs50?search=1) library.
- print_pyramid - uses takes the user’s input and print pyramid with `n` rows, `n - i` spaces and `i` hashes.
- main - calls functions `get_size` and then `print_pyramid`.

**Preview**:
![](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/assets/c_t2.gif)

### Task 3:
In the file [`cash.c`](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/c/week1/cash.c), I implemented a program that calculates the most efficient way to give change., it relies on properties relies on of integer division(e.g.: `(int) 12 / 10 = 1`) and modulo operator(e.g.: `(int) 12 % 10 = 2`).

The program contains 3 functions:
- `get_change` - prompts the user for an integer using the `get_int` function from the [CS50](https://github.com/cs50/libcs50?search=1) library.
- `calculate_change` - takes user's input and divides it by each available coin denomination to get amount of coins to give exactly change.
- `main` - calls functions `get_change` and then `calculate_change`.

**Preview**:
![](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/assets/c_t3.gif)

### Task 4:
In the file [`credit.c`](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/c/week1/credit.c), I implemented a program that checks if the card number, entered by the user is valid(VISA, MasterCard, AMEX). Code is built on same properties as [`cash.c`](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/c/week1/cash.c).

The program contains 3 functions:
- `get_input` - prompts the user for n long using the `get_long` function from the [CS50](https://github.com/cs50/libcs50?search=1) library.
- `is_valid` - takes user's input and divides it by 10 until it = 0, which gives us a length of testing card number. 
Then the luhn algorithm is aplied:
    1. Starting from the last digit, multiply every other digit by 2.
    2. If the result is greater than 9, add its digits separately.
    3. Sum all processed digits together with the untouched digits.
    4. If the total ends in 0, the card number is valid.
- `main` - calls functions `get_input` and then `is_valid`.

**Preview**:
![](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/assets/c_t4.gif)
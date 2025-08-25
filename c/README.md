# Pre-information

In this README file I will document the tasks from `c` section of CS50 course with description of functions that I created or/and used.

Tasks
1. [hello.c](#task-1)
2. [mario.c](#task-2)


## Task 1:
In the file `hello.c`, I implemented a simple program that waits for the user to enter their name and then prints a personalized greeting in the form:
hello, <*name*>.

The program contains one function:

- `main` - prompts the user for an string using `get_string` function from the [CS50](https://github.com/cs50/libcs50?search=1) library and prints the output.

**Preview**:
![](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/assets/c_t1.gif)

## Task 2: 
n the file `mario.c`, I implemented a program that uses loops to create a pair of side-by-side pyramids, one right-aligned and one left-aligned. The height of the pyramids is determined by user input.

The program contains one function:

- `get_size` - prompts the user for an integer using the `get_int` function from the [CS50](https://github.com/cs50/libcs50?search=1) library.
- print_pyramid - uses the value from get_size function and print pyramid with `n` rows, `k = n - i` spaces and `j` hashes.
- main - calls functions `get_size` and then `print_pyramid`.

**Preview**:
![](https://github.com/mykhailodolitsoi/harvard_cs50x/blob/master/assets/c_t2.gif)

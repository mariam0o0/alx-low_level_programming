# C - Function pointers

## Tasks :

* **0. What's my name**
  * [0-print_name.c](./0-print_name.c): C function that prints a name.

* **1. If you spend too much time thinking about a thing, you'll never get it done**
  * [1-array_iterator.c](./1-array_iterator.c): C function that executes a function given
  as a parameter on each element of an array.

* **2. To hell with circumstances; I create opportunities**
  * [2-int_index.c](./2-int_index.c): C function that searches for an integer.
    * Returns the index of the first element for which the `cmp` function does not return `0`.
    * If no element is matched or `size` <= 0, the function returns `-1`.

* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
  * [3-op_functions.c](./3-op_functions.c): File containing the following five functions:
    * `op_add`: Returns the sum of `a` and `b`.
    * `op_sub`: Returns the difference of `a` and `b`.
    * `op_mul`: Returns the product of `a` and `b`.
    * `op_div`: Returns the division of `a` by `b`.
    * `op_mod`: Returns the remainder of the division of `a` by `b`.

  * [3-get_op_func.c](./3-get_op_func.c): C function that selects the correct function
  from `3-op_functions.c` to perform the operation asked by the user.
    * If the operator argument `s` does not match any of the five expected operators
    (`+`, `-`, `*`, `/`, `%`), the function returns `NULL`.

  * [3-main.c](./3-main.c): C program that performs simple mathematical operations.
    * Prints the result of the operation, followed by a new line.
    * Usage `./a.out num1 operator num2`
    * The program assumes `num1` and `num2` are integers that can be converted from string
    input to `int` using `atoi`.
    * The program assumes that the result of all operations can be stored in an `int`.
    * `operator` is one of either `+` (addition), `-` (subtraction), `*`
    (multiplication), `/` (division), or `%` (modulo).
    * If the number of arguments is incorrect, the program prints `Error` followed by a new
    line and exits with a status value of `98`.
    * If the `operator` is none of the above, the program prints `Error` followed by
    a new line and exits with a status value of `99`.
    * If the user tries to divide (`/` or `%`) by `0`, the program prints
    `Error` followed by a new line and exits with a status value of `100`.


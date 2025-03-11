# ALX Low-Level Programming - 0x04. C - More functions, more nested loops

This project, 0x04. C - More functions, more nested loops, is part of the ALX Software Engineering program. It focuses on deepening your understanding of functions, nested loops, and control flow in C programming. You will write various functions to solve problems, print patterns, and manipulate numbers, all while adhering to strict coding standards and constraints.


## Table of Contents

- [About](#about)
- [Tasks](#tasks)
- [How to Use](#how-to-use)
- [Requirements](#requirements)
- [Author](#author)

---

## About

This project, **0x04. C - More functions, more nested loops**, is designed to deepen your understanding of key programming concepts in C. By completing the tasks, you will gain practical experience and improve your ability to write efficient, structured, and clean code. Here’s what you will learn:

- **Nested Loops**:
  - How to use nested loops effectively to solve problems.
  - Understanding the flow of control in nested loops.

- **Functions**:
  - How to define and use functions in C.
  - The difference between function declarations and definitions.
  - How to create and use function prototypes.

- **Variable Scope**:
  - Understanding local and global variable scope.
  - Best practices for managing variable scope in functions.

- **Code Optimization**:
  - Writing efficient code with minimal use of resources (e.g., limiting the use of `_putchar`).
  - Solving problems under strict constraints.

- **Debugging and Testing**:
  - How to test functions and debug code effectively.
  - Using compiler flags like `-Wall`, `-Werror`, `-Wextra`, and `-pedantic` to catch errors.

- **Problem-Solving**:
  - Breaking down complex problems into smaller, manageable tasks.
  - Implementing algorithms to solve specific problems (e.g., Fizz-Buzz, prime factors).

- **Coding Standards**:
  - Adhering to the Betty style guidelines for clean and readable code.
  - Writing code that is maintainable and follows best practices.

- **Header Files**:
  - How to create and use header files (`main.h`) to organize function prototypes.
  - Understanding the importance of header files in modular programming.

- **Advanced Output Manipulation**:
  - Printing patterns (e.g., lines, squares, triangles) using loops and `_putchar`.
  - Formatting output for specific requirements.

- **Mathematical Operations**:
  - Implementing mathematical operations like multiplication and prime factorization.
  - Understanding how to work with integers and their properties.

- **Control Flow**:
  - Mastering control flow structures like `if`, `else`, and loops (`for`, `while`).
  - Using control flow to handle edge cases and special conditions.

- **Standard Library Usage**:
  - When and how to use the standard library functions effectively.
  - Understanding the limitations of using only `_putchar` for output.

**Conclusion**
This project is designed to strengthen your understanding of functions, loops, and control flow in C. By completing these tasks, you will gain hands-on experience in solving problems with strict constraints, preparing you for more advanced programming challenges.

---

## Tasks


### Mandatory Tasks

#### **Task 0: isupper**
- **File**: `0-isupper.c`
- **Description**: Write a function that checks if a character is uppercase.
- **Prototype**: `int _isupper(int c);`
- **Returns**: `1` if `c` is uppercase, `0` otherwise.

---

#### **Task 1: isdigit**
- **File**: `1-isdigit.c`
- **Description**: Write a function that checks if a character is a digit (0-9).
- **Prototype**: `int _isdigit(int c);`
- **Returns**: `1` if `c` is a digit, `0` otherwise.

---

#### **Task 2: Collaboration is multiplication**
- **File**: `2-mul.c`
- **Description**: Write a function that multiplies two integers.
- **Prototype**: `int mul(int a, int b);`

---

#### **Task 3: The numbers speak for themselves**
- **File**: `3-print_numbers.c`
- **Description**: Write a function that prints numbers from 0 to 9, followed by a new line.
- **Prototype**: `void print_numbers(void);`
- **Constraints**: Use `_putchar` only twice.

---

#### **Task 4: I believe in numbers and signs**
- **File**: `4-print_most_numbers.c`
- **Description**: Write a function that prints numbers from 0 to 9, excluding 2 and 4, followed by a new line.
- **Prototype**: `void print_most_numbers(void);`
- **Constraints**: Use `_putchar` only twice.

---

#### **Task 5: Numbers constitute the only universal language**
- **File**: `5-more_numbers.c`
- **Description**: Write a function that prints 10 times the numbers from 0 to 14, followed by a new line.
- **Prototype**: `void more_numbers(void);`
- **Constraints**: Use `_putchar` only three times.

---

#### **Task 6: The shortest distance between two points is a straight line**
- **File**: `6-print_line.c`
- **Description**: Write a function that draws a straight line in the terminal using the `_` character.
- **Prototype**: `void print_line(int n);`
- **Constraints**: Use `_putchar` only.

---

#### **Task 7: I feel like I am diagonally parked in a parallel universe**
- **File**: `7-print_diagonal.c`
- **Description**: Write a function that draws a diagonal line in the terminal using the `\` character.
- **Prototype**: `void print_diagonal(int n);`
- **Constraints**: Use `_putchar` only.

---

#### **Task 8: You are so much sunshine in every square inch**
- **File**: `8-print_square.c`
- **Description**: Write a function that prints a square using the `#` character.
- **Prototype**: `void print_square(int size);`
- **Constraints**: Use `_putchar` only.

---

#### **Task 9: Fizz-Buzz**
- **File**: `9-fizz_buzz.c`
- **Description**: Write a program that prints numbers from 1 to 100, replacing multiples of 3 with `Fizz`, multiples of 5 with `Buzz`, and multiples of both with `FizzBuzz`.
- **Constraints**: Use the standard library.

---

#### **Task 10: Triangles**
- **File**: `10-print_triangle.c`
- **Description**: Write a function that prints a triangle using the `#` character.
- **Prototype**: `void print_triangle(int size);`
- **Constraints**: Use `_putchar` only.

### Advanced Tasks

#### **Task 11: Prime Factors**
- **File**: `100-prime_factor.c`
- **Description**: Write a program that finds and prints the largest prime factor of the number `612852475143`.
- **Constraints**: Use the standard library.

---

#### **Task 12: Print Number**
- **File**: `101-print_number.c`
- **Description**: Write a function that prints an integer using `_putchar`.
- **Prototype**: `void print_number(int n);`
- **Constraints**: Do not use `long`, arrays, pointers, or hard-coded values.


---
### How to Use

1. **Clone the Repository**:  
   Clone the project repository to your local machine using the following command:  
   ```bash
   git clone <repository-url>
   ```

2. **Navigate to the Project Directory**:  
   Change into the project directory:  
   ```bash
   cd 0x04-more_functions_nested_loops
   ```

3. **Compile the Code**:  
   Compile each task using `gcc` with the required flags:  
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
   ```

4. **Run the Executable**:  
   Execute the compiled program:  
   ```bash
   ./<output>
   ```

5. **Check for Betty Style Compliance**:  
   Ensure your code adheres to the Betty style guidelines using:  
   ```bash
   betty-style.pl <file.c>
   betty-doc.pl <file.c>
   ```

---

### Requirements

- **Allowed Editors**: `vi`, `vim`, `emacs`
- **Compilation**: Code must compile on Ubuntu 20.04 LTS using `gcc` with the flags:  
```bash
-Wall -Werror -Wextra -pedantic -std=gnu89
```
- **Coding Style**: Follow the Betty style guidelines.
- **Restrictions**:
- No global variables.
- No more than 5 functions per file.
- Only use `_putchar` for output (no `printf`, `puts`, etc.).
- Include function prototypes in `main.h`.

---

### Author

Ayoub El Ouardi

GitHub: ayoubelouardi

Email:  ayoubelouardioff@example.com

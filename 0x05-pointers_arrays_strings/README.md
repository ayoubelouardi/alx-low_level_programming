# ALX Low-Level Programming - 0x05. Pointers, Arrays, and Strings

This repository contains solutions to the tasks for the **0x05. Pointers, Arrays, and Strings** project in the ALX Low-Level Programming curriculum. The tasks focus on fundamental C programming concepts, including the use of pointers, arrays, strings, and variable scope, without relying on standard library functions (except `_putchar`).

## Table of Contents

- [About](#about)
- [Tasks](#tasks)
- [How to Use](#how-to-use)
- [Requirements](#requirements)
- [Author](#author)

---

## About

This project is part of the ALX SE Foundations curriculum and introduces key concepts in C programming:
- Understanding and using pointers.
- Working with arrays and their differences from pointers.
- Manipulating strings without standard library functions.
- Managing variable scope effectively.

Each task builds practical skills in low-level programming and prepares you for more complex projects. The project ran from **Jul 1, 2024 6:00 AM to Jul 2, 2024 6:00 AM**, with an average score of **104.58%** (mandatory: 91.69%, optional: 83.33%, total: 168.1%).

---

## Tasks

### Mandatory Tasks

1. **0. 98 Battery st.**  
   - **Purpose**: Write a function that updates an integer value to 98 using a pointer.  
   - **File**: `0-reset_to_98.c`

2. **1. Don't swap horses in crossing a stream**  
   - **Purpose**: Swap the values of two integers using pointers.  
   - **File**: `1-swap.c`

3. **2. This report, by its very length, defends itself against the risk of being read**  
   - **Purpose**: Return the length of a string.  
   - **File**: `2-strlen.c`

4. **3. I do not fear computers. I fear the lack of them**  
   - **Purpose**: Print a string followed by a new line using `_putchar`.  
   - **File**: `3-puts.c`

5. **4. I can only go one way. I've not got a reverse gear**  
   - **Purpose**: Print a string in reverse followed by a new line.  
   - **File**: `4-print_rev.c`

6. **5. A good engineer thinks in reverse and asks himself about the stylistic consequences**  
   - **Purpose**: Reverse a string in place.  
   - **File**: `5-rev_string.c`

7. **6. Half the lies they tell about me aren't true**  
   - **Purpose**: Print every other character of a string, starting with the first.  
   - **File**: `6-puts2.c`

8. **7. Winning is only half of it. Having fun is the other half**  
   - **Purpose**: Print the second half of a string.  
   - **File**: `7-puts_half.c`

9. **8. Arrays are not pointers**  
   - **Purpose**: Print `n` elements of an integer array with commas and spaces.  
   - **File**: `8-print_array.c`

10. **9. strcpy**  
    - **Purpose**: Copy a string from source to destination, including the null terminator.  
    - **File**: `9-strcpy.c`

### Advanced Tasks

11. **10. Great leaders are willing to sacrifice the numbers to save the people**  
    - **Purpose**: Convert a string to an integer, handling signs and non-numeric characters.  
    - **File**: `100-atoi.c`

12. **11. Don't hate the hacker, hate the code**  
    - **Purpose**: Generate random valid passwords for the `101-crackme` program.  
    - **File**: `101-keygen.c`

---

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/alx-low_level_programming.git
   ```

2. Navigate to the project directory:
   ```bash
   cd alx-low_level_programming/0x05-pointers_arrays_strings
   ```

3. Compile and run the C programs:
   - For example, to compile and run `0-reset_to_98.c`:
     ```bash
     gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
     ./0-98
     ```

4. For tasks requiring `_putchar`, ensure it’s available or use the provided version during compilation:
   - Example for `3-puts.c`:
     ```bash
     gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
     ./3-puts
     ```

---

## Requirements

- All programs are compiled and tested on **Ubuntu 20.04 LTS**.
- Code is written in C and adheres to the **Betty style guide** (checked with `betty-style.pl` and `betty-doc.pl`).
- Compilation uses `gcc` with the flags:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- No standard library functions (e.g., `printf`, `puts`) are allowed except `_putchar`.
- No global variables or more than 5 functions per file.
- Header file `main.h` must contain all function prototypes.

---

## Author

Ayoub El Ouardi  
GitHub: @ayoubelouardi
Email: ayoubelouardioff@gmail.com  

---

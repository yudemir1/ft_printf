## ft_printf 🖨️

A reimplementation of the standard C library function `printf()`. This project dives into **variadic functions** and requires meticulous handling of different format specifiers for outputting various data types.

**Goal:**
To create a static library (`libftprintf.a`) containing the `ft_printf` function, which mimics the behavior and handles a specific set of format specifiers like the original `printf()`.

**Implemented Conversions:**
*   `%c`: Prints a single character.
*   `%s`: Prints a string of characters.
*   `%p`: Prints the memory address of a pointer in hexadecimal format.
*   `%d`: Prints a signed decimal integer.
*   `%i`: Prints a signed integer (behaves like `%d`).
*   `%u`: Prints an unsigned decimal integer.
*   `%x`: Prints an unsigned integer in lowercase hexadecimal format.
*   `%X`: Prints an unsigned integer in uppercase hexadecimal format.
*   `%%`: Prints a literal percent sign (`%`).

**Tech Stack:**
*   **Language:** C
*   **Core Concepts:** **Variadic Functions** (`va_list`, `va_start`, `va_arg`, `va_end`), Format Specifier Parsing
*   **Build:** Make, `ar` (for static library creation)

---

ft_printf (42 School Project)

A recreation of the standard C library function printf(), implementing a limited set of format conversions and learning about variadic functions.

Goal: To write a library containing ft_printf, a function that mimics the behavior of the original printf for specific format specifiers.

Implemented Conversions :

%c: Single character

%s: String

%p: Pointer address (in hexadecimal)

%d: Decimal integer

%i: Integer (same as %d)

%u: Unsigned decimal integer

%x: Hexadecimal (lowercase)

%X: Hexadecimal (uppercase)

%%: Percent sign

Tech: C, Variadic Functions (va_start, va_arg, va_end), Make, ar (for library creation)

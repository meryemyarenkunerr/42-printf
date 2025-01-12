# 42cursus - printf

The goal of this project is to recreate the `printf()` function in C, providing a deeper understanding of variadic functions and improving programming skills. This project also ensures adherence to coding norms and memory management principles.

## Features

Implementation of the `ft_printf()` function with the following conversions:
- `%c` - Character
- `%s` - String
- `%p` - Pointer (hexadecimal)
- `%d` - Decimal number
- `%i` - Integer (base 10)
- `%u` - Unsigned decimal
- `%x` - Hexadecimal (lowercase)
- `%X` - Hexadecimal (uppercase)
- `%%` - Percent symbol

## Files

- `Makefile` with the following rules: `all`, `clean`, `fclean`, `re`, `bonus`.
- `libftprintf.a` library for the `ft_printf()` implementation.

## Usage

1. Clone the repository and navigate to the project folder.
2. Run `make` to compile and generate `libftprintf.a`.
3. Include `libftprintf.a` in your project and use `ft_printf()` as a replacement for `printf()`.

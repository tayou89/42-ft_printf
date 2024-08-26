# ft_printf

## Description
This project involves recoding the printf() function from libc. The function ft_printf() will mimic the original printf().

## Norminette
This project adheres to the 42 school's coding standard enforced by the Norminette tool. For detailed rules, refer to the Norm PDF in the project resources.

## Function Prototype
```c
int ft_printf(const char *, ...);
```

## Supported Conversions
- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## Makefile
The project includes a Makefile with the following rules:
- `make`: Compiles the project and generates the libftprintf.a library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the libftprintf.a library.
- `make re`: Performs a full recompilation.

## Usage
1. Compile the library:
   ```
   make
   ```

2. Include the header in your C file:
   ```c
   #include "ft_printf.h"
   ```

3. Compile your project with libftprintf.a:
   ```
   gcc your_c_file.c libftprintf.a -o your_program
   ```

## Example
```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return 0;
}
```

## Notes
- The buffer management of the original printf() is not implemented.
- The library file libftprintf.a is created at the root of the repository.
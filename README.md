# Introduction
- This project is one of 42 Seoul subjects.
- The purpose of this project is to upgrade libft library which 'ft_printf' function is added.
- The source code for ft_printf is written by C.
- ft_printf function operates almost identically to the actual 'printf' function in C.
- ft_printf is implemented in accordance with requirements, [ft_print PDF](requirements/ft_printf.pdf) and [Norminette](requirements/nominette.pdf).

# Usage
1. `git clone https://github.com/tayou89/ft_printf.git`
2. Move to the cloned directory (ex.`cd ft_print` for mac terminal)
3. Execute `make` to generate an archived library file, `libftprintf.a`.
4. Use `libftprintf.a` to other project if you need. (compile it togeter)

# Applied Concept for Implemenation
- variadic variables
- va_list in stdarg.h
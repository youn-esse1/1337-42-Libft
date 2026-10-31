*This project has been created as part of the 42 curriculum by ytaoufik.*

# Libft

## Description

Libft is a C project where we build our own static library, `libft.a`, to reuse useful functions in future projects.

The library includes three groups of functions:

- **Standard C functions:** Work with characters, strings, and memory, such as `ft_isalpha`, `ft_strlen`, `ft_memcpy`, and `ft_atoi`.
- **Additional functions:** Split and join strings, convert numbers to strings, and write to file descriptors, such as `ft_split`, `ft_strjoin`, `ft_itoa`, and `ft_putstr_fd`.
- **Linked-list functions:** Create, add, count, delete, and transform nodes, using functions such as `ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`, and `ft_lstmap`. These functions are mandatory in this project.

The project helps develop a better understanding of pointers, memory allocation, data structures, and C compilation.

## Instructions

Run these commands in the project directory:

```bash
make         # Build libft.a
make clean   # Remove object files
make fclean  # Remove object files and libft.a
make re      # Rebuild the library
```

To use Libft in another C program, include `libft.h` and link the library:

```bash
cc main.c libft.a -o program
```

## Resources

- **Libft Subject PDF (Version 19.3)** — Official 42 project requirements and function specifications.
- [C reference](https://en.cppreference.com/w/c) — C functions and language concepts.
- [Linux manual pages](https://man7.org/linux/man-pages/) — Functions such as `malloc`, `free`, and `write`.
- [Stack Overflow](https://stackoverflow.com/) — Community discussions and solutions to  programming problems.

**AI usage:** AI was used to clarify C concepts, suggest improvements to implementations, and help write this README.
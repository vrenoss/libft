
*This project has been created as part of the 42 curriculum by rpaganon.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 school curriculum.

The goal of this project is to recreate several standard C library functions and implement additional utility functions for string manipulation, memory management, character checking and linked list operations.

By implementing these functions from scratch, this project helps develop a deeper understanding of:

- Memory allocation and management.
- Pointers and pointer manipulation.
- Strings and character arrays.
- Data structures, particularly linked lists.
- C programming fundamentals.
- Static library creation and compilation.

The resulting library, `libft.a`, can be reused in future C projects at 42.


## Instructions

### Requirements

To compile this library, you need:

- A C compiler (`cc`).
- GNU Make.
- The `ar` utility.

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile commands

| Command | Description |
|---|---|
| `make` | Compiles the source files and creates `libft.a`. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the compiled library. |
| `make re` | Performs a complete rebuild of the library. |

### Using the library

To use Libft in another C project, include the header file:

```c
#include "libft.h"
```

Compile your program by linking the static library: 

( you must include libft.h in testfile ! ) 
```bash
cc main.c libft.a
```

Execute your program:

```bash
./a.out
```

## Library Description

The library is organized into three main groups of functions.

### 1. Standard C Library Reimplementations

This group contains reimplementations of commonly used functions from the standard C library.

#### Character checking and conversion

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

#### String manipulation

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a limited number of characters. |
| `ft_strdup` | Allocates and returns a duplicate of a string. |
| `ft_strlcpy` | Copies a string into a destination buffer with size limitation. |
| `ft_strlcat` | Concatenates strings while respecting the destination buffer size. |

#### Memory manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specified byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies a specified number of bytes between memory areas. |
| `ft_memmove` | Copies memory areas while supporting overlapping regions. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates memory and initializes it to zero. |

#### Conversion

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string into an integer. |

### 2. Additional Functions

This group contains utility functions that extend the standard C library.

#### String manipulation and allocation

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from a given string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_itoa` | Converts an integer into a newly allocated string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string, allowing modification in place. |

#### File descriptor output

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 3. Linked List Functions

The library also includes functions for manipulating singly linked lists.

The list structure is defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:

- `content`: a pointer to the data stored in the node.
- `next`: a pointer to the next node in the list.

#### Linked list operations

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a supplied function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

The linked list functions use function pointers to allow flexible operations on stored data.

## Resources

The following resources are useful for understanding the C language, standard library functions and memory management.

### Documentation

- [Linux man pages](https://man7.org/linux/man-pages/) - Reference documentation for standard C and system functions.
- [C Reference](https://en.cppreference.com/w/c) - Documentation about the C language and its standard library.
- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/onlinedocs/) - Compiler documentation.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) - Documentation about Makefiles and build automation.

### Learning resources

- [Beej's Guide to C Programming](https://beej.us/guide/bgc/) - Introduction to C programming.
- [42 School](https://42.fr/) - Information about the 42 curriculum.

### AI Usage

AI tools were used as supplementary learning and development resources during this project.

Their use included:

- Helping understand the expected behavior of standard C library functions.
- Clarifying concepts related to pointers, memory allocation and linked lists.
- Explaining certain C programming concepts and potential edge cases.
- Helping structure and improve the project's README documentation.

AI was used as a learning and documentation assistant.

## Project Structure

The project currently follows this general structure:

```text
libft/
├── Makefile
├── libft.h
├── libft.a
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_split.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_itoa.c
└── ...
```

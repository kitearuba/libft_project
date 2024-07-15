# Libft - Your First Library

Welcome to the repository of your first custom C library, Libft! This project is part of the 42 School curriculum and aims to help you understand and implement common C library functions, as well as develop new utility functions that will be useful throughout your programming journey.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Mandatory Part](#mandatory-part)
  - [Libc Functions](#libc-functions)
  - [Additional Functions](#additional-functions)
- [Bonus Part](#bonus-part)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)

## Introduction

Programming in C can be tedious without access to commonly used functions. This project involves creating your own library, `libft`, which includes a variety of functions that will serve as a helpful toolkit for your future C projects. You will implement standard C library functions as well as additional functions, and possibly more advanced features if you complete the bonus part.

## Project Structure

```
.
├── ft_*.c            # Implementation of the required functions
├── libft.h           # Header file containing function prototypes
├── Makefile          # Makefile to compile the library
├── README.md         # This README file
└── libft.a           # The generated library file after compilation
```

## Technologies Used

- **C**: The primary programming language for this project.
- **Makefile**: For building and managing the compilation process.

## Installation

To get a local copy up and running, follow these simple steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/libft.git
   ```
2. Navigate to the project directory:
   ```sh
   cd libft
   ```
3. Compile the library:
   ```sh
   make
   ```

## Usage

Once compiled, you can link `libft.a` to your own projects. Here’s an example of how to use it in your own C project:

1. Include the header file in your source files:
   ```c
   #include "libft.h"
   ```
2. Compile your project with the library:
   ```sh
   gcc -o myproject myproject.c -L. -lft
   ```

## Mandatory Part

### Libc Functions

You will reimplement a selection of functions from the standard C library (libc). Each function will have the same prototype and behavior as the original but will be prefixed with `ft_`.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### Additional Functions

Additional utility functions that are not part of libc but are commonly used:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## Bonus Part

If you have completed the mandatory part, you can further enhance your library by implementing the following list manipulation functions:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

These functions will use the following structure to represent a node in your list:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

## Contributing

Contributions are welcome! If you have suggestions for improvements or new features, please follow these steps:

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/AmazingFeature`).
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4. Push to the branch (`git push origin feature/AmazingFeature`).
5. Open a pull request.

## Acknowledgements

- A big thank you to the 42 School for providing this challenging and rewarding project.
- Special thanks to the open-source community for their invaluable resources and support.

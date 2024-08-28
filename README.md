---

# 📚 **Libft - Your First Custom C Library**

![Libft](https://img.shields.io/badge/42-Libft-blue?style=flat-square) ![C Programming](https://img.shields.io/badge/Language-C-brightgreen?style=flat-square) ![Makefile](https://img.shields.io/badge/Build-Makefile-yellow?style=flat-square)

Welcome to the repository of **Libft**, your first custom C library! This project is part of the 42 School curriculum and serves as a foundation for many future C projects. You'll implement essential C library functions, create utility functions, and—if you choose—expand the library with advanced list operations.

---

## 📑 **Table of Contents**

1. [Introduction](#introduction)
2. [Project Structure](#project-structure)
3. [Technologies Used](#technologies-used)
4. [Installation](#installation)
5. [Usage](#usage)
6. [Mandatory Part](#mandatory-part)
   - [Libc Functions](#libc-functions)
   - [Additional Functions](#additional-functions)
7. [Bonus Part](#bonus-part)
8. [Contributing](#contributing)
9. [Acknowledgements](#acknowledgements)
10. [Author](#author)

---

## 📖 **Introduction**

Programming in C can sometimes feel tedious without access to commonly used functions. This project, **Libft**, provides you with the opportunity to build your own C library by reimplementing standard functions (like those from libc) and adding new, helpful utility functions. These will serve as a valuable toolkit for all your future C projects.

The **Libft** library will be your foundation for handling strings, memory, file descriptors, and much more. If you complete the **bonus part**, you'll also implement essential linked list management functions.

---

## 📂 **Project Structure**

```bash
.
├── ft_*.c            # Source files implementing required functions
├── libft.h           # Header file containing function prototypes
├── Makefile          # Makefile to compile the library
├── README.md         # This README file
└── libft.a           # Compiled library after running make
```

This structure ensures that the library is modular and easy to manage. Each C file focuses on a particular category of functions (e.g., string manipulation, memory management).

---

## 🛠️ **Technologies Used**

- **C Language**: The core language for implementing all functions.
- **Makefile**: Used to automate the compilation process.
- **GCC Compiler**: Compiles and links the C source files into the `libft.a` library.

---

## 🛠️ **Installation**

To get started with **Libft**, follow these steps to clone and build the library:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/libft.git
   ```

2. **Navigate to the Project Directory**:
   ```bash
   cd libft
   ```

3. **Compile the Library**:
   Simply run the `make` command to compile the library:
   ```bash
   make
   ```

After running `make`, you'll see the `libft.a` file, which is your compiled static library.

---

## 🚀 **Usage**

Once compiled, you can use **Libft** in your own C projects by linking it during compilation.

1. **Include the Header in Your Code**:
   ```c
   #include "libft.h"
   ```

2. **Compile Your Project with Libft**:
   You can link **Libft** with your project by specifying the path to `libft.a` during compilation:
   ```bash
   gcc -o myproject myproject.c -L. -lft
   ```

By using the `-L.` flag, you specify the current directory where the `libft.a` file is located, and the `-lft` flag tells the compiler to link against **Libft**.

---

## 💻 **Mandatory Part**

### 🔨 **Libc Functions**

You will implement a selection of functions from the C standard library (libc), prefixed with `ft_` to distinguish them from the originals. These functions will help you manage characters, strings, and memory. Some examples include:

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

### 🔧 **Additional Utility Functions**

In addition to the libc functions, you'll implement utility functions that aren't part of the standard library but are useful for everyday programming:

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

These functions will help you manipulate strings, convert integers, and print data to file descriptors.

---

## 🎯 **Bonus Part**

After completing the mandatory part, you can extend your library by implementing linked list functions. These functions will allow you to manage dynamic lists with ease.

### 🌟 **Bonus Functions**

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

These functions operate on a linked list structure, which is defined as follows:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

Implementing these functions will give you a powerful tool for managing linked data structures.

---

## 🤝 **Contributing**

Contributions are welcome! To contribute:

1. **Fork the Repository**.
2. **Create a Branch** for your feature or fix (`git checkout -b feature/AmazingFeature`).
3. **Commit Your Changes** (`git commit -m 'Add some AmazingFeature'`).
4. **Push to Your Branch** (`git push origin feature/AmazingFeature`).
5. **Open a Pull Request**.

Feel free to suggest improvements or request new features to enhance **Libft**!

---

## 🙌 **Acknowledgements**

A big thank you to **42 School** for providing such a challenging and rewarding curriculum. Thanks to the open-source community for their invaluable resources and contributions.

---

## 👨‍💻 **Author**

- **chrrodri** - _42 Barcelona_  
  [GitHub Profile](https://github.com/yourusername)

---

## 🎉 **Final Thoughts**

Creating your own custom C library is a rewarding process that improves your understanding of low-level programming and memory management. **Libft** is just the beginning of your journey, and having this library will be a powerful tool in your future C projects.

Good luck, and happy coding! 🚀

---

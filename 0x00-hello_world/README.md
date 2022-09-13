# 0x00. C - Hello, World 👋

Introduction to the C programming language.

## Learning Objectives

---

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Tasks

---

0. [Preprocessor](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/0-preprocessor) - Write a script that compiles a C file but does not link.
1. [Compiler](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/1-compiler) - Write a script that compiles a C file but does not link.
2. [Assembler](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/2-assembler) - Write a script that generates assembly code for a C file and save it in an output file.
3. [Name](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/3-name) - Write a script that compiles a C file and creates an executable named `cisfun`.
4. [Hello, puts](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/4-puts.c) - Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
   - Use the function `puts`
   - You are not allowed to use `printf`

5. [Hello, printf](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/5-printf.c) - Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
   - Use the function `printf`
   - You are not allowed to use the function `puts`

6. [Size is not grandeur, and territory does not make a nation](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/6-size.c) - Write a C program that prints the size of various types on the computer it is compiled and run on.
   - You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option

7. [Intel](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/100-intel) - Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
   - The output file should be named the same as the C file, but with the extension .s instead of .c

8. [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](https://github.com/Adeniyii/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c) - Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
   - You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`

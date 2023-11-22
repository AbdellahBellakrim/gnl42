# Get Next Line

**Get Next Line** is a function that reads a line from a file descriptor in C programming language. It allows you to read a text file or standard input line by line, making it a convenient addition to your collection of functions. This project also provides an opportunity to learn about static variables in C programming.

## Table of Contents

- [Goals](#goals)
- [Common Instructions](#common-instructions)
- [Mandatory Part](#mandatory-part)
- [Bonus Part](#bonus-part)

## Goals

The main goal of this project is to implement the `get_next_line` function, which reads a line from a file descriptor. The function should return the line that was read, or `NULL` if there is nothing else to read or an error occurred. The function should work correctly when reading from a file or from standard input. The returned line should include the terminating `\n` character, except when the end of file is reached and does not end with a `\n` character.

## Common Instructions

- Your project must be written in C.
- Follow the Norm guidelines for writing code.
- Your functions should not quit unexpectedly (e.g., segmentation fault, bus error) apart from undefined behaviors.
- Free any heap-allocated memory properly to avoid leaks.
- If required, include a Makefile with the necessary rules (`$(NAME)`, `all`, `clean`, `fclean`, `re`) to compile your project.
- The project should be submitted to your assigned Git repository.

## Mandatory Part

### Function Signature

```char *get_next_line(int fd);```
The get_next_line function takes a file descriptor (fd) as a parameter and returns a line read from that file descriptor. The function should handle repeated calls (using a loop) to read the text file or standard input, one line at a time. If there is nothing else to read or an error occurs, the function should return NULL.

Files to Submit
get_next_line.c
get_next_line_utils.c
get_next_line.h

### Bonus Part
If you have completed the mandatory part and want to take on additional challenges, you can attempt the bonus part. Here are the requirements:

Develop get_next_line using only one static variable.
The function should be able to manage multiple file descriptors simultaneously. Each call to get_next_line should read from a different file descriptor without interfering with the reading thread of each descriptor or returning a line from another descriptor.
To submit the bonus part, include the following files in addition to the mandatory part files:

get_next_line_bonus.c
get_next_line_bonus.h
get_next_line_utils_bonus.c
Note: The bonus part will only be evaluated if the mandatory part is completed perfectly.

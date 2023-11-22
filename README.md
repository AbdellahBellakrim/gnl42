# Get Next Line Project

This project involves programming a function, `get_next_line`, that reads a line from a file descriptor. The function should be able to read a text file pointed to by the file descriptor, one line at a time.

## Table of Contents
1. [Goals](#goals)
2. [Common Instructions](#common-instructions)
3. [Mandatory Part](#mandatory-part)
4. [Bonus Part](#bonus-part)

## Goals
- Implement a function (`get_next_line`) that reads a line from a file descriptor.
- Learn and apply the concept of static variables in C programming.

## Common Instructions
- Project must be written in C.
- Follow the Norm guidelines.
- Functions should not quit unexpectedly.
- Properly free all heap allocated memory.
- Submit a Makefile for compilation.
- Create a `bonus` rule in the Makefile for additional features.
- If using `libft`, copy its sources and Makefile to a `libft` folder.
- Encourage creating test programs for the project.

## Mandatory Part
### Function: `get_next_line`
- Prototype: `char *get_next_line(int fd);`
- Parameters: `fd` - The file descriptor to read from.
- Return Value: 
  - Read line: correct behavior.
  - `NULL`: Nothing else to read, or an error occurred.
- External Functions: `read`, `malloc`, `free`.
- Description: 
  - Repeated calls to `get_next_line` should read the text file one line at a time.
  - Returns the line that was read.
  - Returns `NULL` if nothing else to read or if an error occurred.
  - Header file `get_next_line.h` must contain the prototype.
  - Helper functions in `get_next_line_utils.c`.

### Compilation
- Define buffer size for `read()` using: `-D BUFFER_SIZE=n`
- Example: `cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c`
- Considerations for `BUFFER_SIZE` value.

### Forbidden
- No use of `libft`.
- `lseek()` is forbidden.
- Global variables are forbidden.

## Bonus Part
- Develop `get_next_line` using only one static variable.
- Manage multiple file descriptors simultaneously.
- Files: 
  - `get_next_line_bonus.c`
  - `get_next_line_bonus.h`
  - `get_next_line_utils_bonus.c`

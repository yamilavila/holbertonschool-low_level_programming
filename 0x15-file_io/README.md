Learning Objectives
===================
General:

    Look for the right source of information online

    How to create, open, close, read and write files

    What are file descriptors

    What are the 3 standard file descriptors, what are their purpose and what are their POSIX names

    How to use the I/O system calls open, close, read and write

    What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR

    What are file permissions, and how to set them when creating a file with the open system call

    What is a system call

    What is the difference between a function and a system call


Question #0

What is the unistd symbolic constant for the standard input?

   * STDIN_FILENO

    STDOUT_FILENO

    STDERR_FILENO

Question #1

What is the unistd symbolic constant for the standard output?

    STDIN_FILENO

   * STDOUT_FILENO

    STDERR_FILENO

Question #2

What is the unistd symbolic constant for the Standard error?

    STDIN_FILENO

    STDOUT_FILENO

   * STDERR_FILENO

Question #3

What is the oflag used to open a file with the mode read only?

    O_WRONLY

   * O_RDONLY

    O_RDWR

Question #4

What is the oflag used to open a file in mode read + write?

    O_WRONLY

    O_RDONLY

   * O_RDWR

Question #5

What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?

    O_WRONLY

    O_WRONLY | O_CREAT | O_EXCL

   * O_WRONLY | O_CREAT | O_APPEND

    O_RDWR | O_CREAT | O_APPEND

Question #6

is open a function or a system call? (select all valid answers)

   * it’s a function

   * it’s a system call

    it’s a library call

   * it’s a function provided by the kernel

    it’s a kernel routine

Question #7

What system call would you use to write to a file descriptor? (select all correct answers)

    printf

    fprintf

   * write

Question #8

Without context, on Ubuntu 14.04 LTS, write is a … (please select all correct answers):

   * executable

   * system call

    library call

    game

    kernel routine

Question #9

What is the return value of the system call open if it fails?

    0

   * -1

    98

Question #10

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):

    0

    1

    2

   * 3

    4

    5

    6

Question #11

why? #AlwaysAskWhy

    Because this will be the first opened file descriptor and in CS we start counting starting from 0

    Because this will be the first opened file descriptor and we start counting starting from 1

    Because this will be the second opened file descriptor for my process

    Because this will be the third opened file descriptor for my process

   * Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.

    I don’t care I never ask why, just let me access the tasks!

Question #12

Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS? (select all correct answers):

    O_RDONLY

    1

   * 2

    3

   * 1 << 1

   * 3 & 2

    3 | 2

    O_WRONLY

    (O_RDONLY + O_WRONLY)

    (O_RDONLY | O_WRONLY)

    (O_RDONLY & O_WRONLY)

    (O_RDONLY && O_WRONLY)

    (O_RDONLY << 1)

   * (O_WRONLY << 1)

    0

 Question #13

What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?

    Nothing

    Segmentation fault

    The text will be printed on the terminal but I can’t pipe it

   * The text will be printed on the terminal on the standard output

 Question #14

When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.

   * True

    False


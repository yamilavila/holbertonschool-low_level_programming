Learning Objective
------------------
General

    What is the difference between automatic and dynamic allocation
    What is malloc and free and how to use them
    Why and when use malloc
    How to use valgrind to check for memory leak


Question #0

What is Valgrind?

    A container service

   * It’s a program to validate memory allocation

    It’s a new step when I compile with gcc

    It’s a program to test a C program in a specific environment

Question #1

How many bytes will this statement allocate?

malloc(sizeof(int) * 4)

    4

    8

   * 16

    32

Question #2

How many bytes will this statement allocate?

malloc(sizeof(int) * 10)

   * 40

    32

    10

Question #3

How many bytes will this statement allocate?

malloc(sizeof(unsigned int) * 2)

    2

    4

   * 8

Question #4

How many bytes will this statement allocate?

malloc(sizeof(char) * 10)

   * 10

    20

    40

Question #5

How many bytes will this statement allocate?

malloc(10)

    2

   * 10

    4

    40

Question #6

How many bytes will this statement allocate?

malloc((sizeof(char) * 10) + 1)

    1

    10

    21

    20

   * 11


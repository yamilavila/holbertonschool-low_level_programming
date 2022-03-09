Learning Objective
---
General

    What are function pointers and how to use them
    What does a function pointer exactly hold
    Where does a function pointer point to in the virtual memory


Question #0

Which one is a pointer to a function?

    int func(int a, float b);

    int *func(int a, float b);

   * int (*func)(int a, float b);

    (int *)func(int a, float b);

Question #1

To store the address of this function:

void neyo(void);

to the variable f of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):

   * f = neyo;

  /* f = &neyo; */

    *f = neyo;

    *f = &neyo;

Question #2

If f is a pointer to a function that takes no parameter and returns an int, you can call the function pointed by f this way (check all correct answers if there is more than one):

   * f();

   * (*f)();

    f;

Question #3

This void (*anjula[])(int, float) is:

    A pointer to a function that takes an int and a float as parameters and returns nothing

    A pointer to a function that takes an array of int and float as a parameter and returns nothing

    A pointer to a function that takes an int and a float as parameters and returns an empty array

   * An array of pointers to functions that take an int and a float as parameters and returns nothing

    A pointer to an array of functions that take an int and a float as parameters and returns nothing

Question #4

What does a pointer to a function point to (check all correct answers if there is more than one)?

    data

   * code

    The first character of the name of the function

   * The first byte of code of the function


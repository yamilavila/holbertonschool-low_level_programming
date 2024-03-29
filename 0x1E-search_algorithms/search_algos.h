#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

/* 0.Linear search*/
int linear_search(int *array, size_t, int value);

/* 1.Binary search */
int binary_search(int *array, size_t size, int value);

/* 7.Jump search */
int jump_search(int *array, size_t size, int value);

/* 9.Interpolation search*/
int interpolation_search(int *array, size_t size, int value);

#endif

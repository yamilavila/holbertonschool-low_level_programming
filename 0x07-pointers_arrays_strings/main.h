#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

/* 0.memset*/
char *_memset(char *s, char b, unsigned int n);

/*1-memcpy*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*2-strchr.c*/
char *_strchr(char *s, char c);

/*3-strspn.c*/
unsigned int _strspn(char *s, char *accept);

/*4-strpbrk.c*/
char *_strpbrk(char *s, char *accept);

/*5.strstr.c*/
char *_strstr(char *haystack, char *needle);

/*Ejercicio 6. Chess is mental torture 7-print_chessboard.c*/
void print_chessboard(char (*a)[8]);

/*Ejercicio 7. The line of life... 8-print_diagsums.c*/
void print_diagsums(int *a, int size);

#endif

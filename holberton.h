#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>
/**
 * struct frmtspec - Format specifier struct
 * @fmt: Pointer to char checking matching specifier
 * @func: Pointer to function for correct format
 */
typedef struct frmtspec
{
	char *fmt;
	void (*func)(va_list, int *);
} fmt_s;

int _printf(const char *format, ...);
int _putchar(char c, int *);
void _puts(char *str, int *);
int _strcmp(char *s1,char *s2);
void printstring(va_list, int *);
void printmodulo(va_list, int *);
void printchar(va_list, int *);
void printint(va_list, int *);
void DintoB(va_list args, int *);
void print_number(int n, int *);
void printbinary(unsigned int n, int *);
void (*get_fmt_func(char *s))(va_list, int *);
void print_unumber(unsigned int n, int *);
void printunsign(va_list, int *);
void dtooprint(va_list, int *);
void _dtooprint(unsigned int, int*);

#endif

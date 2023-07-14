#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 *  * error_exit - prints error with _putchar
 *   * Return: 98
 *    */
int error_exit(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}
/**
 *  * check_number - cheks for num
 *   * @str: string
 *    * Return: 0 or 1
 *     */
int check_number(char *str)
{

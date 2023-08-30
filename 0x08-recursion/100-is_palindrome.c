#include "main.h"

/**
 * check_palindrome - to check the string
 * @str: string to be checked
 * @len: length of the string
 * @i: the incrementer
 * Return: 1 if it's a palindrome, 0 if it's not
 */

int check_palindrome(char *str, int len, int i);


int check_palindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (check_palindrome(str, len - 1, i + 1));

	if (str[i] != str[len])
		return (0);

	return (1);
}

/**
 * _strlen_recursion - function prints the total length of a string
 * @s: string
 * Return: length integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string being checked
 * Return: 1 if palindrome, 2 if it's not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (check_palindrome(s, length, i));
}

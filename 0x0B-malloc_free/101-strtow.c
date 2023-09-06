#include <stdlib.h>
#include <stdio.h>

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings, or NULL if fail
 */
char **strtow(char *str)
{
	char **s;
	int i, k, n, count_word = 0, len_of_word = 0, present_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			count_word++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (count_word == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (count_word + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, k = i; present_word < count_word; i++, len_of_word = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			len_of_word++;
		s[present_word] = malloc(sizeof(char) * len_of_word + 1);
		if (!s[present_word])
		{
			while (present_word-- >= 0)
				free(s[present_word]);
			free(s);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			s[present_word][n] = *(str + i);
		s[present_word++][n] = '\0';
	}
	s[count_word] = NULL;
	return (s);
}

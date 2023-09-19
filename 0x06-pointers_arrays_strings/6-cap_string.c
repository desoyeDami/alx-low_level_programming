/**
 * cap_string - Capitalizes the first letter of words in a string.
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the modified string (str).
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {
		'\t', '\n', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	/* Iterate through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Capitalize the first letter if it's lowercase */
		/* and the beginning of the str */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		/* Check if the character is one of the specified separators */
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				/* Capitalize the next character if it's lowercase */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}


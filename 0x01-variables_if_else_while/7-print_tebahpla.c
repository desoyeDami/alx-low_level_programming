/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a';  c  <= 'z'; c++)
		putchar(rev(c));

	return (0);
}

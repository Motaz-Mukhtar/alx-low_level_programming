/**
 * print_alpahbet_x10 - print the alphabet, in lowercase
 * Return - Always 0.
 */
void print_alphabet_x10(void)
{
	int n, i = 1;

	while (i <= 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		i++;
	}
}
/**
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int n = 'a';
	
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}

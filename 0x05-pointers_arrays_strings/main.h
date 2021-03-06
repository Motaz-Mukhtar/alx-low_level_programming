#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approperiately.
 */
int _putchar(char c);
/*{
//	return (write(1, &c, 1));
//}
*/
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void print_array(int *a, int n);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

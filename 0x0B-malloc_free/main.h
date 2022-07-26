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
char *create_array(unsigned int size, char c);
char *_strdup(char *str);

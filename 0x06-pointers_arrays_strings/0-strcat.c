#include "main.h"

/**
 * _strcat - function that appends src string to dest string
 * overwrting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * @dest: input destination pointer
 * @src: input source pointer
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *base_dest = dest;

	while (*base_dest)
		base_dest++;

	while (*src)
		*base_dest++ = *src++;

	*base_dest = '\0';
	return (dest);
}

#include<unistd.h>
#include<sys/syscall.h>
#include<string.h>

/**
 * main-Entry point
 * Description: Prints and that piece of art is useful\"
 * - Dora Korpar, 2015-10-19
 *
 * Return: Always 1
 */

int main(void)
{
	char msg[59];

	strcpy(msg, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	syscall(SYS_write, 1, msg, sizeof(msg));

	return (1);
}

#include <unistd.h>

/**
 * main - entry point
 *
 * Return: 1
 */
int main(void)
{
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = sizeof(message) - 1;  /* exclude the terminating null byte */

    if (write(STDERR_FILENO, message, len) != len)
        return (1);	
}

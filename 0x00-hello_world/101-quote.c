#include <unistd.h>

#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
/* Write MESSAGE to the standard error */
write(2, MESSAGE, sizeof(MESSAGE) - 1);

/* Return 1 to indicate an error occurred */
return (1);
}

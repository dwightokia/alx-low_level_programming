#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}

#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
char *sh = "Holberton";
while (*sh)
{
	_putchar(*sh);
	sh++;
}
_putchar('\n');
return (0);
}

#include "main.h"

/**
 * main - Entery point 
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (success)
*/

int main(void) 
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	-putchar('\n');

	return (0);

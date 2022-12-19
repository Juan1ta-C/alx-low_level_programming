#include "main.h"
/**
 * puts2 - puts 2
 * @str: input string
 */
void puts2(char *str)
{
	int i;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}

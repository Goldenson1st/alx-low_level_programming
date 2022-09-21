#include "main.h"
/**#include <stdio.h>**/

/**
 * _strlen - returns the lenght of a string.
 * @s: input string.
 * Return: lenght of a string.
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		/**printf("%c",*(counter));**/
		counter++;
	}
	return (counter);
}

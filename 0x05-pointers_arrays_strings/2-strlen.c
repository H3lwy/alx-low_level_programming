#include "main.h"
/**
 * int _strlen - a function that returns the length of a string.
 * @s : string
 * return : length
 */
int _strlen(char *s)
{
	int count = 0;

	while(*s != '\0')
	{
		count++;
		s++;
	}
	
	return(count);
}

#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - to upper case
 * @s: pointer to an array
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i; i <= strlen(s); i++)
	{
		s[i] = toupper(s[i]);
	}
}

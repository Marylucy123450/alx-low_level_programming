#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	/*Loop through each character of the string*/
	while (str[index])
	{
		/*Skip non-alphabetic characters*/
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		/*Capitalize the character if it is the first letter of a word*/
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}

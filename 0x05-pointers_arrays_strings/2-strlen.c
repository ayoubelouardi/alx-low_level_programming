/**
 * _strlen - return string length
 * @_strlen: string
 * Description: function that returns the length of a string.
 * Return: returns the number of bytes in the string
 */

int _strlen(char *s)
{
	int i = 0, counter = 0;
	
	while (*(s + i) != '\0')
	{
		counter++;
		i++;
	}

	return (counter);
}

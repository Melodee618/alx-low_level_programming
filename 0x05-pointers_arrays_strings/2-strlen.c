/**
* _strlen - Return the length of a string
* @s: pointer
*
* Return: String length
*/
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;

	}
	return (leng);
}

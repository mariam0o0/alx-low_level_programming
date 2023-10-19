/**
 * _strcmp - ompares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: integer number
 */

int _strcmp(char *s1, char *s2)
{
for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}

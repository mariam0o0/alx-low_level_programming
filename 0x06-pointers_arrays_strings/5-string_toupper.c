/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string
 * Return: the string
 */
char *string_toupper(char *s)
{
for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] > 'a' && s[i] < 'z')
s[i] = s[i] - 32;
}
return (s);
}

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string
 * Return: the string
 */
char *string_toupper(char *s)
{
char *c = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (c);
}

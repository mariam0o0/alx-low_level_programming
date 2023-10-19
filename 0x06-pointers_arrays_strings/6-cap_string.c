/**
 * *cap_string - capitalizes all words of a string
 * @s: pointer to the string
 * Return: the string
 */

char *cap_string(char *s)
{
char arr[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

int i;

char *c = s;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == arr[i])
continue;
else if (s[i] > 'a' && s[i] < 'z')
s[i] = s[i] - 32;
}
return (c);
}

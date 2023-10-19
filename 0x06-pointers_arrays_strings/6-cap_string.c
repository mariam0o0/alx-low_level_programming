/**
 * *cap_string - capitalizes all words of a string
 * @s: pointer to the string
 * Return: the string
 */
char *cap_string(char *s)
{
char *c = s;

int i;

char a[] = " \t\n,.!?\"(){}";

int u = 1;

while (*s)
{
if (u && *s >= 'a' && *s <= 'z')
*s -= 32;
u = 0;
for (i = 0; i < 12; i++)
{
if (*s == a[i])
u = 1;
}
s++;
}
return (c);
}

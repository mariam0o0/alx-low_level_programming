/**
 * *leet -  encodes a string into 1337
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *leet(char *s)
{
char a[] = {'a', 'e', 'o', 't', 'l'};

int b[] = {4, 3, 0, 7, 1};

char *c = s;

int i;

while (*s)
{
for (i = 0; i < 5; i++)
{
if (*s == a[i] || *s == a[i] - 32)
*s = b[i] + '0';
}
s++;
}
return (c);
}

#include"main.h"
/**
 * rev_string -  reverses a string
 * @s: pointer to the string
 * Return: nothing
 */
void rev_string(char *s)
{
int i, len, start, end;

i = 0;
while (s[i] != '\0')
{
i++;
}
start = 0;
end = len - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}

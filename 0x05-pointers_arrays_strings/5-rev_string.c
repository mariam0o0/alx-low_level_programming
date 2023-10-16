#include"main.h"
/**
 * rev_string -  reverses a string
 * @s: pointer to the string
 * Return: nothing
 */
void rev_string(char *s)
{
int i, start, end;

i = 0;
while (s[i] != '\0')
{
i++;
}
start = 0;
end = i - 1;
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

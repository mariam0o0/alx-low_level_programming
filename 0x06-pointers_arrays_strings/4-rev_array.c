/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: size
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int temp, i;

for (i = 0; i < (n / 2); i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}

/**
 * string_toupper -all lowercars in a string to uppercase
 *
 * Return: A pointer to the resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

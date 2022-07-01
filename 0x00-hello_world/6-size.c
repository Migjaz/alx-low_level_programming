#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long l;
long long m;
float f;

printf("Size of char: %lu. byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.  byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu.  byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long_long int: %lu. byte(s)\n", (unsigned long)sizeof(m));
pritnf("Size of float: %lu. byte(s)\n", (unsigned long)sizeof(f));

return (0);
}

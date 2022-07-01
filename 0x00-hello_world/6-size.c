#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long l;
	double m;
	float f;

	printf("Size of char: %lu. byte(s)\n", sizeof(c));
	printf("Size of an int: %lu.  byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu.  byte(s)\n", sizeof(l));
	printf("Size of a long_long int: %lu. byte(s)\n", sizeof(m));
	pritnf("Size of float: %lu. byte(s)\n", sizeof(f));

	return (0);
}

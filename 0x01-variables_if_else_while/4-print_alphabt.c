#include <stdio.h>
/**
 * main - prints alphabets in lower case except e & q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int ltr;
ltr = a;
for (ltr = 'a'; ltr <= 'z'; ltr++)
{
if (ltr != 'e' && ltr != 'q')
putchar(ltr);
}
putchar("\n");
return (0);
}

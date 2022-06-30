#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c_char;
int c_int;
long c_long;
long long c_long_long;
float c_float;

printf("Size of char: %d byte(s)\n", unsigned long sizeof(c_char));
printf("Size of an int: %d byte(s)\n", unsigned long sizeof(c_int));
printf("Size of a long int: %d byte(s)\n", unsigned long sizeof(c_long));
printf("Size of a long long int: %d byte(s)\n", unsigned long sizeof(c_long_long));
pritnf("Size of float: %d byte(s)\n", unsigned long sizeof(c_float));

return (0);
}

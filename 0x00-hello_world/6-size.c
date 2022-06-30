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

printf("Size of char: %d byte(s)\n", unsigned long sizeof(char));
printf("Size of an int: %d byte(s)\n", unsigned long sizeof(int));
printf("Size of a long int: %d byte(s)\n", unsigned long sizeof(long));
printf("Size of a long_long int: %d byte(s)\n", unsigned long sizeof(long_long));
pritnf("Size of float: %d byte(s)\n", unsigned long sizeof(float));

return (0);
}

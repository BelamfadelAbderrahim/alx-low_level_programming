#include <stdio.h>
/**
 * main - a program that prints a size of various computer types
 * Return: 0(success)
*/
int main(void)
{
     char a;
     int b;
     long int c;
     long long int d;
     float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}

#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	char f;
	int j;
	long int m;
	long long int ja;
	float jas;
	
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ja));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(jas));
return (0);
}

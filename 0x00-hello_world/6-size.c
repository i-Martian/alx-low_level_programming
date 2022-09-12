#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ainteger;
	char acharacter;
	float afloat;
	long along;
	long long alonglong;

	printf("The Size of an int: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));

	return 0;
}

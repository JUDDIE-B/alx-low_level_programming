#include <stdio.h>

/**
 * main - Program that prints all single numbers of base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num < 10; num++)
		printf("%d", num);

	print("\n");

	return (0);
}

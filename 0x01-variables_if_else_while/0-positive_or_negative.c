#include <stdio.h>
#include <time.h>
/**
 * main - print if n is positive,negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n > 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("invalid input");
	}
	return (0);
include <stlib.h>
include <time.h>
include <stdio.h>

/**
 * main- function
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10; /* This is the last digit*/
	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is zero\n", n, last_digit);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not o\n",
				n, last_digit);
	}
	return (0)


#include <stdio.h>

/**
  *main - entrypoint
  *
  *Return: void
  */

int main(void)
{
	int m = 1;
	char j[] = "Fizz";
	char a[] = "Buzz";

	while (m <= 100)
	{
		if (((m % 3) == 0) && ((m % 5) != 0))
		{
			m++;
			printf("%s ", j);
			continue;
		}
		else if (((m % 5) == 0) && (m % 3) != 0)
		{
			m++;
			printf("%s ", a);
			continue;
		}
		else if (((m % 3) == 0) && ((m % 5) == 0))
		{
			m++;
			printf("%s%s ", j, a);
			continue;
		}
		printf("%d ", m);
		m++;
	}
	printf("\n");
	return (0);
}

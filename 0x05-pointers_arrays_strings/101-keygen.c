#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - makes a random pass_wordword
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i, total, n;
	int pass_word[100];

	total = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass_word[i] = rand() % 78;
		total += (pass_word[i] + 48);
		putchar(pass_word[i] + 48);
		if ((2772 - total) - 48 < 78)
		{
			n = 2772 - total - 48;
			total += n;
			putchar(n + 48);
			break;
		}
	}
	return (0);
}

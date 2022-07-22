#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int value, guess = 0, count = 0;

	srand((int)time(NULL));
	value = rand() % 100;
	do {
		printf("Guess the answer: ");
		scanf("%d", &guess);
		count++;

		if (guess > value)
			printf("The suggested integer is high.\n");
		if (guess < value)
			printf("The suggested integer is low\n");
	} while (value != guess);

	printf("Congratulations! Count=%d\n", count);

	return 0;
}

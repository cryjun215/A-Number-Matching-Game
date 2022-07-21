#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int value, guess, count = 0;

	srand((int)time(NULL));
	value = rand() % 100;
	while (1) {
		printf("Guess the answer.: ");
		scanf("%d", &guess);
		if (value < guess) {
			printf("The suggested integer is high.\n");
			count++;
		}
		else if (value > guess) {
			printf("The suggested integer is low\n");
			count++;
		}
		else if (value = guess) {
			count++;
			printf("Congratulations! Counts:%d\n", count);
			break;
		}
	}

	return 0;
}
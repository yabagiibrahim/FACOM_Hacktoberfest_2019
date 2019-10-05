#include <stdio.h>
#include <math.h>

int PrimeNumber(int number) {
	int i = 2;
	int prime = 1;

	while (prime && i <= sqrtf(number)) {
		if (number % i == 0) { prime = 0; }
		i++;
	}
	return prime;
}

void main() {
	int n;

	printf("Input number to check if it is prime: ");
	scanf("%d", &n);

	printf("\n");

	if (PrimeNumber(n)) {
		printf("Number %d is prime.\n", n);
	} else {
		printf("Number %d is not prime.\n", n);
	}
}
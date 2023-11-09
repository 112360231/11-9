#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long int c;
	for (int i = 0; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	unsigned int n;
	printf("Enter the index of the Fibonacci number to print: ");
	scanf("%d", &n);

	unsigned long long int fib = fibonacci(n);
	printf("The %dth Fibonacci number is %llu\n", n, fib);

	return 0;
}
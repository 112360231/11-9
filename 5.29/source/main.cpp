#include <stdio.h>


int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}


int lcm(int a, int b) {
	int greatestCommonDivisor = gcd(a, b);
	return (a * b) / greatestCommonDivisor;
}

int main() {
	int num1, num2;

	printf("請輸入第一個整數: ");
	scanf("%d", &num1);

	printf("請輸入第二個整數: ");
	scanf("%d", &num2);

	int result = lcm(num1, num2);
	printf("這兩個整數的最小公倍數是: %d\n", result);

	return 0;
}
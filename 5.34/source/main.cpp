#include <stdio.h>


int power(int base, int exponent) {
	
	if (exponent == 1) {
		return base;
	}
	
	else {
		return base* power(base, exponent -1);
	}
}

int main() {
	int base, exponent;

	printf("�п�J��ơG");
	scanf("%d", &base);

	printf("�п�J���ơ]�j�󵥩�1�^�G");
	scanf("%d", &exponent);

	int result = power(base, exponent);
	printf("%d �� %d ���赲�G�O %d\n", base, exponent, result);

	return 0;
}
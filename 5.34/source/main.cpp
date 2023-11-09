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

	printf("請輸入基數：");
	scanf("%d", &base);

	printf("請輸入指數（大於等於1）：");
	scanf("%d", &exponent);

	int result = power(base, exponent);
	printf("%d 的 %d 次方結果是 %d\n", base, exponent, result);

	return 0;
}
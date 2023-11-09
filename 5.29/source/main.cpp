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

	printf("�п�J�Ĥ@�Ӿ��: ");
	scanf("%d", &num1);

	printf("�п�J�ĤG�Ӿ��: ");
	scanf("%d", &num2);

	int result = lcm(num1, num2);
	printf("�o��Ӿ�ƪ��̤p�����ƬO: %d\n", result);

	return 0;
}
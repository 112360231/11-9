#include <stdio.h>

char changeCase(char character) {
	if (character >= 'a' && character <= 'z') {
		return character - 32; // Convert lowercase to uppercase
	}
	else if (character >= 'A' && character <= 'Z') {
		return character + 32; // Convert uppercase to lowercase
	}
	else {
		return character; // Return unchanged if it's not an alphabet character
	}
}

int main() {
	char inputChar;

	printf("�п�J�@�Ӧr��: ");
	scanf(" %c", &inputChar);

	char result = changeCase(inputChar);
	printf("�j�p�g�����᪺���G�O: %c\n", result);

	return 0;
}
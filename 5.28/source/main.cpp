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

	printf("請輸入一個字母: ");
	scanf(" %c", &inputChar);

	char result = changeCase(inputChar);
	printf("大小寫切換後的結果是: %c\n", result);

	return 0;
}
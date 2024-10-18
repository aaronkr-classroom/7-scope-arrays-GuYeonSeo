#include <stdio.h>

int shift = 5; // A -> D(4 shift)

void encrypt(char* msg) {
	char ch;
	int i = 0;

	while (msg[i] != '\0') {
		ch = msg[i];

		//소문자
		if (ch >= 'a' && ch <= 'z') {
			ch = (ch - 'a' + shift) % 26 + 'a';
		}
		//대문자 암호화
		else if (ch >= 'A' && ch <= 'z') {
			ch = (ch - 'A' + shift) % 26 + 'A';
		}

		msg[i] = ch; //msg 변수를 업데이트하기
		i++;
	}
	// return msg;
}
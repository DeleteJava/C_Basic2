#include <stdio.h>

int main(void) {
	// scanf_s : "scan" formatted

	// c, s, d, lf 4가지를 이용하여 입력을 받는다.
	// ※ c, s, d, f 4가지를 이용하여 출력한다.
	char ch;
	char word[100];
	int num;
	double fnum;
	// 서식문자는 올바르게 변수에 맞게 넣어줘야 한다. 형변환 안됨.
	printf("문자 하나를 넣어주세요...>> ");
	scanf_s("%c", &ch, 1);
	printf("단어 입력 >> ");
	scanf_s("%s", word, 100);
	printf("정수, 실수 입력 >> ");
	scanf_s("%d", &num);
	scanf_s("%lf", &fnum);
	
	printf("%c %s %d %.2f\n", ch, word, num, fnum);
	return 0;
}
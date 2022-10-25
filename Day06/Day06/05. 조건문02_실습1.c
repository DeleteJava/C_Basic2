#include <stdio.h>

int main(void) {
	int num = 0;
	printf("정수 하나 입력 >> ");
	scanf_s("%d", &num);
	printf("입력한 정수 : %d\n", num);
	// 배수 판단은 나머지연산을 이용한다!
	if (num != 0) {
		// 2의 배수
		if (num % 2 == 0) {
			printf("2의 배수입니다.\n");
		}
		// 7의 배수
		if (num % 7 == 0) {
			printf("7의 배수입니다.\n");
		}
	}
	// 15초과
	if (num > 15) {
		printf("15 초과입니다.\n");
	}
	// 15미만
	if (num < 15) {
		printf("15 미만입니다.\n");
	}
	return 0;
}
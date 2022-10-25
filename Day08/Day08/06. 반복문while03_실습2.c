#include <stdio.h>

int main(void) {
	int num = 0;
	while (num % 11 != 0 || num == 0) {
		printf("11의 배수 입력 >> ");
		scanf_s("%d", &num);
	}
	printf("11의 배수가 입력되어 종료합니다.\n");
	return 0;
}
#include <stdio.h>

int main(void) {
	int num1; int num2; int num3;
	double result;
	printf("정수 3개 입력 >> ");
	// 값의 값을 구분할 때는 엔터/띄어쓰기로 구분되는 규칙이었죠.
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	result = num1 + num2 + num3;

	printf("합 : %.0f\n", result);
	printf("평균 : %.4f\n", result / 3);
	return 0;
}
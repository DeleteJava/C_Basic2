#include <stdio.h>

int main(void) {
	// 여러개의 숫자중 제일 큰 수를 보고 싶다..?
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int max;
	printf("정수 3개 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// 사람의 사고방식을 끌고와서 여기에 묘사한 것
	max = num1;
	// - 선택정렬의 일부이며, 정렬을 위한 방법으로 응용된다.
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	printf("제일 큰 수 : %d\n", max);
	return 0;
}
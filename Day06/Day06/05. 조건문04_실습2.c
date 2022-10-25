#include <stdio.h>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	int n1; int n2; int result;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	/*
	원본
	if (num1 > num2) {
		printf("첫번째 정수가 더 큽니다.\n");
		printf("2을/를 곱한 결과 : %d\n", num1 * 2);
	}
	else {
		printf("두번째 정수가 더 큽니다.\n");
		printf("3을/를 곱한 결과 : %d\n", num2 * 3);
	}
	*/

	/*
	편의를 위해 줄인 형태
	if (num1 > num2) {
		// 선언하고 초기화할 수 있지만 그 내부에서만 가능...
		// char word[100] = "첫";
		n1 = 1; n2 = 2;
		result = num1 * 2;
	}
	else {
		n1 = 2;
		n2 = 3;
		result = num2 * 3;
	}
	printf("%d번째 정수가 더 큽니다.\n", n1);
	printf("%d을/를 곱한 결과 : %d\n", n2, result);
	*/

	// 극단적으로 줄일 경우
	// 조건연산자를 이용해서 값에 한해서만 처리가 되도록 만들기도 한다.
	result = num1 > num2;
	printf("%s번째 정수가 더 큽니다.\n", (result) ? "첫":"두" );
	printf("%d을/를 곱한 결과 : ", (result) ? 2 : 3);
	printf("%d\n", (result) ? num1 * 2 : num2 * 3);
	return 0;
}
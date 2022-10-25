#include <stdio.h>

int main(void) {
	int n = 0;
	while (n < 1) {
		printf("정수 입력 >> ");
		scanf_s("%d", &n);
	}
	// 10이 들어왔으면 1부터 10까지 보여준다.
	
	// 유한반복 : 무한반복의 연장선. 입력을, 증감식으로 떠넘겨 사용한다.
	
	// 원본 : 화면에 나오면 좋겠다고 생각하는 형태
	/* printf("1 2 3 4 5 6 7 8 9 10\n"); */
	// 분해 : 같은 형태로 정리가 되도록 쪼갠다.
	/*
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 ");
	printf("5 ");
	printf("6 ");
	printf("7 ");
	printf("8 ");
	printf("9 ");
	printf("10 ");
	printf("\n");
	*/
	// 통일 : 변수와 연산식을 이용해 같은 모양이 되도록 만든다.
	/*
	int num = 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	printf("\n");
	*/
	// 포장 : while로 포장한다.
	int num = 1;
	while (num<=n) {
		printf("%d ", num);
		// 입력을 일정수치만큼 증가하도록 바꾼 것
		num +=1;
	} printf("\n");
	// 구성요소는 4가지
	// 1. 무엇이 바뀌나? -> 변수가 만들어진다.
	// 2. 시작값이 무엇이냐 -> 변수에 넣을 값이 정해진다.
	// 3. 얼마나 증가하냐? -> 증감식으로 빠진다.
	// 4. 그 값을 가지고 뭘 하냐? -> 출력/연산/입력 등등....
	return 0;
}
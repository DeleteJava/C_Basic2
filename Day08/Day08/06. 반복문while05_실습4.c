#include <stdio.h>

int main(void) {
	// 반복문은 단순노가다 용도로도 가능하지만...
	// 우리가 원하는 만큼 코드가 실행되도록 해주는 것이 주 목적이다!
	// 프로그램의 첫화면을 담당하도록 만들어 쓴다.
	// - 메뉴 등등...
	int num = 2;
	while (num <= 30) {
		printf("%d ", num);
		num += 2;
	} printf("\n");
	// 유한반복 : 입력을 일정수치만큼 증가하도록 만들어 대신 처리
	// 무한반복 : scanf_s와 연계하여 사용했음.

	// 덤 : 한줄로 하고 싶은데...
	int num1 = 0;
	// 선택에 맡기겠습니다.
	while (num1 < 30) printf("%d ", num1 += 2); 
	return 0;
}
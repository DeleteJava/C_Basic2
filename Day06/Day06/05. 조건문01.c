#include <stdio.h>

int main(void) {
	// 조건문 : 코드를 선택하여 실행하기
	// 주의사항 : 수싸움
	
	// 사용법1. if만 사용하기. 추가/선택적 실행
	// if : 조건문을 시작하고, 단독사용가능
	int num = 0;
	printf("짝수면 홀수로 바꾸기\n정수 입력 >> ");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		// 주의 : 2의 배수일 때 5의 배수이니
		//       따로 있을 때와 달리 10의 배수이다.
		if (num % 5 == 0) {
			printf("10의 배수가 되었습니다!\n");
		}
		printf("짝->홀로 변경\n");
		num += 1;
	}
	printf("처리결과 : %d\n", num);
	if (num % 5 == 0) {
		printf("5의 배수가 되었습니다!\n");
	}
	// 필요하시면 원하는 만큼 추가 가능...
	return 0;
}
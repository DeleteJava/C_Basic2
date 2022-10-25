#include <stdio.h>

int main(void) {
	int num = 11;
	int result;
	// scanf_s : 최대 서식문자의 수량만큼의 정수값이 나오고
	//           이를 이용해 몇개가 성공/실패했는지 체크한다.
	//           단, 몇번째가 성공/실패했는지는 나오지 않는다.
	while (num > 10) {
		printf("정수 입력 >> ");
		result = scanf_s("%d", &num); // 정수형 result 변수에 넣었기에 잘못된 값이 들어가면 0으로 출력된다. 
		if (result == 0) {
			printf("잘못된 값이 입력되었습니다...\n");
			rewind(stdin);
		}
		else if (num > 10) printf("10보다 더 큽니다.\n");
	}
	printf("%d\n", result);
	printf("10이하가 입력되어 종료됩니다.\n");
	return 0;
}
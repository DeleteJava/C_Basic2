#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;
	printf("정수 3개를 입력 ※단. 첫번째 수를 가장 큰 수로 입력하세요 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// 선택지가 많을 때 조건식 설정하는 요령
	// 1. 서로 다른 경우일 경우, 뭘 걸어도 상관없음
	//    - 경우의 수가 더 적은 쪽을 먼저 거는게 좋다.
	// 2.  내부에서 경우의 수가 많은 경우에도 경우의 수가 명백하게
	//     적은 쪽을 우선으로 건다.
	if (num1 == 0) printf("%d의 약수는 없습니다.", num1);
	if (num1 > num2 && num1 > num3)
	{
		if (num1 % num2 == 0 || num1 % num3 == 0)
		{
			if (num1 % num2 == 0 && num1 % num3 == 0)
				printf("%d는 %d의 배수입니다.", num1, num2 * num3);
			else if (num1 % num2 == 0) printf("%d는 %d의 배수입니다.\n", num1, num2);
			else printf("%d는 %d의 배수입니다.\n", num1, num3);
		}
		else printf("%d의 약수는 없음\n", num1);
	}
	else printf("잘못된 입력값입니다.");

	return 0;
}
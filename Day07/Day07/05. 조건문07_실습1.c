#include <stdio.h>

int main(void) {
	int num = 0;
	int copied;
	printf("자릿수 판별기\n정수 입력 >> ");
	scanf_s("%d", &num);
	copied = num;
	// 상태가 변하는 것들은 한쪽으로 몰아버리면 편해진다.
	if (num < 0) num *= -1; // num = -num;
	// 왜? 조건식이 절반으로 줄어든다.
	if (num < 10) printf("한자리 수입니다.\n");
	else if (num < 100) printf("두자리 수입니다.\n");
	else printf("세자리 이상의 수입니다.\n");
	
	// 실무 + 산술연산
	// 0은 거짓 / 1은 참
	// 확장해서 0은 거짓 / 0이외의 것은 참
	if (!(num / 10)) printf("한자리 수입니다.\n"); // 한자릿수는 10으로 몫이 1이 나오지 않으므로 1이 아니면 출력
	else if (!(num / 100)) printf("두자리 수입니다.\n");
	else printf("세자리 이상의 수입니다.\n");
	return 0;
}
#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("임의의 정수 입력 : ");
	scanf_s("%d", &num);
	if (num < 0) num *= -1;
	if (num >= 0 && num < 10) printf("%d는 한 자릿수입니다.\n", num);
	else if (num >= 10 && num < 100) printf("%d는 두 자리수입니다.\n", num);
	else printf("%d는 세자릿수 이상입니다.\n",num);


	// 실무 + 산술연산
	// 0은 거짓 / 1은 참
	// 확장해서 0은 거짓 / 0이외의 것은 참
	if (!(num / 10)) printf("한자리 수 입니다.\n");
	else if (!(num / 100)) printf("두자리 수 입니다.\n");
	else printf("세자리 이상의 수 입니다.\n");



	return 0;
}
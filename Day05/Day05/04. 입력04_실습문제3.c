#include <stdio.h>

int main(void)
{
	int num1, num2;
	double fnum1, fnum2;
/*
	
	printf("정수1 입력 : ");
	scanf_s("%d", &num1);
	printf("정수2 입력 : ");
	scanf_s("%d", &num2);
	printf("실수1 입력 : ");
	scanf_s("%lf", &fnum1);
	printf("실수2 입력 : ");
	scanf_s("%lf", &fnum2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
	printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
*/
	// scanf_s는 분리해서 쓰는 것이 좀 더 융퉁성이 좋다.
	printf("정수2개 입력 : ");
	scanf_s("%d%d", &num1, &num2); // %3d 넣으면 12345 넣어도 3자리만 인식해줌
	printf("실수2개 입력 : ");
	scanf_s("%lf%lf", &fnum1, &fnum2);
	printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%.2f + %.2f = %.2f\n", fnum1, fnum2, fnum1 + fnum2);



	return 0;
}
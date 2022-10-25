#include <stdio.h>

int main(void)
{
	int ko = 0, en = 0, math = 0;
	double result = 0;
	printf("국어 성적 입력 : "); scanf_s("%d", &ko);
	rewind(stdin);
	printf("영어 성적 입력 : "); scanf_s("%d", &en);
	rewind(stdin);
	printf("수학 성적 입력 : "); scanf_s("%d", &math);
	rewind(stdin);
	result = (ko + en + math) / (double)3;
	char rank;
	if (result >= 90 && result <= 100) rank = 'A';
	else if (result >= 80) rank = 'B';
	else if (result >= 70) rank = 'C';
	else if (result >= 60) rank = 'D';
	else rank = 'F';
	printf("%c등급\n", rank);
	printf("평균 = %.1f\n", result);





	return 0;
}
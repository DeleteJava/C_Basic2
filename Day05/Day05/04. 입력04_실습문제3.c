#include <stdio.h>

int main(void)
{
	int num1, num2;
	double fnum1, fnum2;
/*
	
	printf("����1 �Է� : ");
	scanf_s("%d", &num1);
	printf("����2 �Է� : ");
	scanf_s("%d", &num2);
	printf("�Ǽ�1 �Է� : ");
	scanf_s("%lf", &fnum1);
	printf("�Ǽ�2 �Է� : ");
	scanf_s("%lf", &fnum2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
	printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
*/
	// scanf_s�� �и��ؼ� ���� ���� �� �� �������� ����.
	printf("����2�� �Է� : ");
	scanf_s("%d%d", &num1, &num2); // %3d ������ 12345 �־ 3�ڸ��� �ν�����
	printf("�Ǽ�2�� �Է� : ");
	scanf_s("%lf%lf", &fnum1, &fnum2);
	printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%.2f + %.2f = %.2f\n", fnum1, fnum2, fnum1 + fnum2);



	return 0;
}
#include <stdio.h>

int main(void) {
	int num1; int num2; int num3;
	double result;
	printf("���� 3�� �Է� >> ");
	// ���� ���� ������ ���� ����/����� ���еǴ� ��Ģ�̾���.
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	result = num1 + num2 + num3;

	printf("�� : %.0f\n", result);
	printf("��� : %.4f\n", result / 3);
	return 0;
}
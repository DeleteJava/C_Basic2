#include <stdio.h>

int main(void) {
	// �������� ������ ���� ū ���� ���� �ʹ�..?
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int max;
	printf("���� 3�� >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// ����� ������� ����ͼ� ���⿡ ������ ��
	max = num1;
	// - ���������� �Ϻ��̸�, ������ ���� ������� ����ȴ�.
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	printf("���� ū �� : %d\n", max);
	return 0;
}
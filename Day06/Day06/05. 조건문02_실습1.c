#include <stdio.h>

int main(void) {
	int num = 0;
	printf("���� �ϳ� �Է� >> ");
	scanf_s("%d", &num);
	printf("�Է��� ���� : %d\n", num);
	// ��� �Ǵ��� ������������ �̿��Ѵ�!
	if (num != 0) {
		// 2�� ���
		if (num % 2 == 0) {
			printf("2�� ����Դϴ�.\n");
		}
		// 7�� ���
		if (num % 7 == 0) {
			printf("7�� ����Դϴ�.\n");
		}
	}
	// 15�ʰ�
	if (num > 15) {
		printf("15 �ʰ��Դϴ�.\n");
	}
	// 15�̸�
	if (num < 15) {
		printf("15 �̸��Դϴ�.\n");
	}
	return 0;
}
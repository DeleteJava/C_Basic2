#include <stdio.h>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	int n1; int n2; int result;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	/*
	����
	if (num1 > num2) {
		printf("ù��° ������ �� Ů�ϴ�.\n");
		printf("2��/�� ���� ��� : %d\n", num1 * 2);
	}
	else {
		printf("�ι�° ������ �� Ů�ϴ�.\n");
		printf("3��/�� ���� ��� : %d\n", num2 * 3);
	}
	*/

	/*
	���Ǹ� ���� ���� ����
	if (num1 > num2) {
		// �����ϰ� �ʱ�ȭ�� �� ������ �� ���ο����� ����...
		// char word[100] = "ù";
		n1 = 1; n2 = 2;
		result = num1 * 2;
	}
	else {
		n1 = 2;
		n2 = 3;
		result = num2 * 3;
	}
	printf("%d��° ������ �� Ů�ϴ�.\n", n1);
	printf("%d��/�� ���� ��� : %d\n", n2, result);
	*/

	// �ش������� ���� ���
	// ���ǿ����ڸ� �̿��ؼ� ���� ���ؼ��� ó���� �ǵ��� ����⵵ �Ѵ�.
	result = num1 > num2;
	printf("%s��° ������ �� Ů�ϴ�.\n", (result) ? "ù":"��" );
	printf("%d��/�� ���� ��� : ", (result) ? 2 : 3);
	printf("%d\n", (result) ? num1 * 2 : num2 * 3);
	return 0;
}
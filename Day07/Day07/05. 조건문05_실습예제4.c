#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("������ ���� �Է� : ");
	scanf_s("%d", &num);
	if (num < 0) num *= -1;
	if (num >= 0 && num < 10) printf("%d�� �� �ڸ����Դϴ�.\n", num);
	else if (num >= 10 && num < 100) printf("%d�� �� �ڸ����Դϴ�.\n", num);
	else printf("%d�� ���ڸ��� �̻��Դϴ�.\n",num);


	// �ǹ� + �������
	// 0�� ���� / 1�� ��
	// Ȯ���ؼ� 0�� ���� / 0�̿��� ���� ��
	if (!(num / 10)) printf("���ڸ� �� �Դϴ�.\n");
	else if (!(num / 100)) printf("���ڸ� �� �Դϴ�.\n");
	else printf("���ڸ� �̻��� �� �Դϴ�.\n");



	return 0;
}
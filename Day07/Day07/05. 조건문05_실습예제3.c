#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;
	printf("���� 3���� �Է� �ش�. ù��° ���� ���� ū ���� �Է��ϼ��� : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// �������� ���� �� ���ǽ� �����ϴ� ���
	// 1. ���� �ٸ� ����� ���, �� �ɾ �������
	//    - ����� ���� �� ���� ���� ���� �Ŵ°� ����.
	// 2.  ���ο��� ����� ���� ���� ��쿡�� ����� ���� ����ϰ�
	//     ���� ���� �켱���� �Ǵ�.
	if (num1 == 0) printf("%d�� ����� �����ϴ�.", num1);
	if (num1 > num2 && num1 > num3)
	{
		if (num1 % num2 == 0 || num1 % num3 == 0)
		{
			if (num1 % num2 == 0 && num1 % num3 == 0)
				printf("%d�� %d�� ����Դϴ�.", num1, num2 * num3);
			else if (num1 % num2 == 0) printf("%d�� %d�� ����Դϴ�.\n", num1, num2);
			else printf("%d�� %d�� ����Դϴ�.\n", num1, num3);
		}
		else printf("%d�� ����� ����\n", num1);
	}
	else printf("�߸��� �Է°��Դϴ�.");

	return 0;
}
#include <stdio.h>

int main(void) {
	// 0�� ���ϰ� ��ü������ �ȵǾ��ִµ�.....
	int count = 0;
	int sale;
	int price;
	printf("������ ���� �Է� >> ");
	scanf_s("%d", &count);
	if (count <= 0) {
		printf("���߿� ������ ������ �� �̴ϴ�...\n");
	}
	else {
		price = count * 500;
		if (count < 50) {
			sale = 0;
		}
		else if (count < 100) {
			sale = 10;
		}
		else {
			sale = 20;
		}
		printf("������ ����\t: %d��\n", price);
		printf("���η�\t\t: %d�ۼ�Ʈ\n", sale);
		printf("������ ����\t: %d��\n", price * (100 - sale) / 100);
	}
	return 0;
}
#include <stdio.h>

int main(void) {
	int num = 11;
	int result;
	// scanf_s : �ִ� ���Ĺ����� ������ŭ�� �������� ������
	//           �̸� �̿��� ��� ����/�����ߴ��� üũ�Ѵ�.
	//           ��, ���°�� ����/�����ߴ����� ������ �ʴ´�.
	while (num > 10) {
		printf("���� �Է� >> ");
		result = scanf_s("%d", &num); // ������ result ������ �־��⿡ �߸��� ���� ���� 0���� ��µȴ�. 
		if (result == 0) {
			printf("�߸��� ���� �ԷµǾ����ϴ�...\n");
			rewind(stdin);
		}
		else if (num > 10) printf("10���� �� Ů�ϴ�.\n");
	}
	printf("%d\n", result);
	printf("10���ϰ� �ԷµǾ� ����˴ϴ�.\n");
	return 0;
}
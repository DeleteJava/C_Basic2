#include <stdio.h>

int main(void) {
	int num = 0;
	while (num % 11 != 0 || num == 0) {
		printf("11�� ��� �Է� >> ");
		scanf_s("%d", &num);
	}
	printf("11�� ����� �ԷµǾ� �����մϴ�.\n");
	return 0;
}
#include <stdio.h>

int main(void) {
	int n = 0;
	while (n < 1) {
		printf("���� �Է� >> ");
		scanf_s("%d", &n);
	}
	// 10�� �������� 1���� 10���� �����ش�.
	
	// ���ѹݺ� : ���ѹݺ��� ���弱. �Է���, ���������� ���Ѱ� ����Ѵ�.
	
	// ���� : ȭ�鿡 ������ ���ڴٰ� �����ϴ� ����
	/* printf("1 2 3 4 5 6 7 8 9 10\n"); */
	// ���� : ���� ���·� ������ �ǵ��� �ɰ���.
	/*
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 ");
	printf("5 ");
	printf("6 ");
	printf("7 ");
	printf("8 ");
	printf("9 ");
	printf("10 ");
	printf("\n");
	*/
	// ���� : ������ ������� �̿��� ���� ����� �ǵ��� �����.
	/*
	int num = 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	printf("\n");
	*/
	// ���� : while�� �����Ѵ�.
	int num = 1;
	while (num<=n) {
		printf("%d ", num);
		// �Է��� ������ġ��ŭ �����ϵ��� �ٲ� ��
		num +=1;
	} printf("\n");
	// ������Ҵ� 4����
	// 1. ������ �ٲ? -> ������ ���������.
	// 2. ���۰��� �����̳� -> ������ ���� ���� ��������.
	// 3. �󸶳� �����ϳ�? -> ���������� ������.
	// 4. �� ���� ������ �� �ϳ�? -> ���/����/�Է� ���....
	return 0;
}
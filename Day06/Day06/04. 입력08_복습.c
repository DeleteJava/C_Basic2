#include <stdio.h>

int main(void) {
	// scanf_s : "scan" formatted

	// c, s, d, lf 4������ �̿��Ͽ� �Է��� �޴´�.
	// �� c, s, d, f 4������ �̿��Ͽ� ����Ѵ�.
	char ch;
	char word[100];
	int num;
	double fnum;
	// ���Ĺ��ڴ� �ùٸ��� ������ �°� �־���� �Ѵ�. ����ȯ �ȵ�.
	printf("���� �ϳ��� �־��ּ���...>> ");
	scanf_s("%c", &ch, 1);
	printf("�ܾ� �Է� >> ");
	scanf_s("%s", word, 100);
	printf("����, �Ǽ� �Է� >> ");
	scanf_s("%d", &num);
	scanf_s("%lf", &fnum);
	
	printf("%c %s %d %.2f\n", ch, word, num, fnum);
	return 0;
}
#include <stdio.h>

int main(void) {
	int score1 = 0; int score2 = 0; int score3 = 0;
	double result;
	printf("���� ���� �Է� >> "); scanf_s("%d", &score1);
	printf("���� ���� �Է� >> "); scanf_s("%d", &score2);
	printf("���� ���� �Է� >> "); scanf_s("%d", &score3);
	result = (score1 + score2 + score3) / 3.0;
	
	char rank1;
	if (result < 60) rank1 = 'F';
	else if (result < 70) rank1 = 'D';
	else if (result < 80) rank1 = 'C';
	else if (result < 90) rank1 = 'B';
	else rank1 = 'A';
	printf("��� : %c���\n", rank1);
	printf("��� : %.1f��\n", result);

	char rank2;
	if (result >= 90) rank2 = 'A';
	else if (result >= 80) rank2 = 'B';
	else if (result >= 70) rank2 = 'C';
	else if (result >= 60) rank2 = 'D';
	else rank2 = 'F';
	printf("��� : %c���\n", rank2);
	printf("��� : %.1f��\n", result);
	return 0;
}
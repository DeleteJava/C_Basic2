#include <stdio.h>

int main(void)
{
	// ���α׷��� ���� �� ���ǻ���
	// - ���κ��� �Է¹޾Ƽ� � ���� �ʿ��Ѱ�?
	char name[100]; char dream[100]; char blood[100]; int age;
	// ���ǻ���
	// scanf_s�� ���Ĺ��ڸ��� ��Ģ�� �ٸ���.
	// �Է��Լ��� ���� ��Ģ�� �޸��Ͽ� �Է��� �޴´�.
	printf("�̸� �Է� : ");
	scanf_s("%s", name, 100);
	printf("���� �Է� : ");
	scanf_s("%d", &age);
	printf("������ �Է� : ");
	scanf_s("%s", blood, 100);
	printf("�� �Է� : ");
	gets_s(dream, 100);
	printf("�̸�\t: %s\n", name);
	printf("����\t: %d\n", age);
	printf("������\t: %s\n", blood); // %c�� ���õȴ�
	printf("��\t: %s\n", dream); // ��µ��� �ʴ´�.




	return 0;
}
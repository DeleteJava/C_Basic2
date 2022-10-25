#include <stdio.h>

int main(void)
{
	// 프로그램을 만들 때 주의사항
	// - 어디로부터 입력받아서 어떤 값이 필요한가?
	char name[100]; char dream[100]; char blood[100]; int age;
	// 주의사항
	// scanf_s는 서식문자마다 규칙이 다르다.
	// 입력함수는 서로 규칙을 달리하여 입력을 받는다.
	printf("이름 입력 : ");
	scanf_s("%s", name, 100);
	printf("나이 입력 : ");
	scanf_s("%d", &age);
	printf("혈액형 입력 : ");
	scanf_s("%s", blood, 100);
	printf("꿈 입력 : ");
	gets_s(dream, 100);
	printf("이름\t: %s\n", name);
	printf("나이\t: %d\n", age);
	printf("혈액형\t: %s\n", blood); // %c가 무시된다
	printf("꿈\t: %s\n", dream); // 출력되지 않는다.




	return 0;
}
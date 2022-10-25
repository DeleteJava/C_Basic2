#include <stdio.h>

int main(void)
{ // getchar() : 단일문자 입력함수
/*
	char ch;
	printf("문자 하나를 입력하세요 : ");
	ch = getchar();
	printf("\n입력받은 문자 : %c\n", ch);
*/
	// gets_s() : 문자열(문장)을 입력받을 때 사용하는 입력함수
/*
	char word[100];
	printf("입력받을 문자열을 입력하세요 : ");
	gets_s(word, 100); // 최대 입력 가능한 수량을 의미한다.
	printf("\n입력한 문장\n%s\n", word);
*/


/*  // 실습문제2.
   
	// 필요한 변수는 미리 준비한다.
	char name[100]; char age[100]; char dream[100];
	
	printf("이름을 입력하세요 >> ");
	gets_s(name, 100);
	printf("나이를 입력하세요 >> ");
	gets_s(age, 100);
	printf("명확한 꿈을 문장으로 나타내세요 >> ");
	gets_s(dream, 100);
	printf("이름\t: %s\n", name);
	printf("나이\t: %s\n", age);
	printf("꿈\t: %s\n", dream);
*/


	return 0;
}
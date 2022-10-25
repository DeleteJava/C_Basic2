#include <stdio.h>

int main(void) {
	// 입력문제가 생겼을 경우 대처요령
	// 1. 엄한 값이 들어올 수 있다.
	// - 변수를 초기화한다.
	// - scanf_s는 입력실패시 저장하지 않는다.
	// 2. 문자는 선두입력이 아니면 문제가 된다.
	// - 유일한 예외로써 서식문자 앞에 띄어쓰기를 넣는다.
	// - 다른 서식문자의 입력규칙과 동일하게 사용가능
	int num1 = 0; int num2 = 0; int num3 = 0;
	char ch = 'A';
	printf("정수1 입력 >> "); scanf_s("%d", &num1);
	printf("정수2 입력 >> "); scanf_s("%d", &num2);
	printf("정수3 입력 >> "); scanf_s("%d", &num3);
	printf("문자 >> "); scanf_s(" %c", &ch, 1);
	printf("\n\n합 : %d\n", num1 + num2 + num3);
	printf("->%c<-\n", ch);
	// 가끔 쓰는 것들
	// 1. rewind(stdin)을 이용한다.
	// - 남아있는 것들을 제거해준다.
	// - 선택적으로 실행되어야 한다. 남발시 과도하게 느려짐.
	// 2. 입력함수가 바뀌면 입력규칙이 달라진다.
	// - 달리 동작하는 규칙이 있는지 점검한다.
	// - getchar()를 이용해서 불필요한 부분을 읽어서 없앤다.
	char msg[100];
	int age;
	printf("나이 입력 >> ");
	scanf_s("%d", &age);
	rewind(stdin); // getchar();
	printf("꿈 입력 >> ");
	gets_s(msg, 100);
	printf("나이 : %d\n", age);
	printf("꿈 : %s\n", msg);
	return 0;
}
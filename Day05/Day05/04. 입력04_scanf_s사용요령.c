#include <stdio.h>

int main(void)
{	// scan formatted securly
	// 기본적인 사용방식
	// 1) 서식문자만 작성한다.
	// - 서식문자별 서식 인식 못함.
	// - 띄어쓰기 넣으면 입력이 꼬일 수 있음.
	// - 이스케이프 넣으면 더 골치아픈 상황이 발생함.
	// 2) 하나 입력시, 하나 입력하고 엔터.
	//	여러개 입력시에는 기본적으로 띄어쓰기로 구분하고 엔터.
	//  단, 여러개 입력시 값을 모자르게 넣으면 다 넣어야 처리해주기 때문에
	//  이 때는 엔터로도 값이 구별된다.
	
	// 1) %c : 문자 출력/입력 용도
	char ch;
	// & : 주소연산자 변수의 메모리주소를 끄집어낸다.
	//printf("ch의 위치정보 : %d\n", &ch);
	// scanf_s는 이를 이용하여 훑어서 일치한 내용을 저장시키는 구조이다.
	printf("문자를 넣으세요 : ");
	scanf_s("%c", &ch, 1); // 문자 입력시 주의사항 : 문자로 취급되면 뭐든 저장
	printf("문자 : ->%c<-\n",ch);

	// 2) %s : 문자열(단어)출력/입력 용도 (문장은 이전의 gets_s 사용)
	char word[100];
	printf("임의의 단어 입력 >> ");
	scanf_s("%s", word, 100); // 문자열은 눈에 보이는 것만 저장해준다. 
	printf("입력된 단어 : %s\n", word);


	// 3) %d : 정수출력/입력 용도
	int num1; int num2;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2); // 기본적으로 띄어쓰기로 숫자를 구별한다.
	printf("둘 더한 결과 : %d\n", num1 + num2);

	// 4) %lf double자료형 실수 출력/입력 용도
	// %f는 입력시에는 float자료형 실수용으로 사용한다.
	double fnum;
	printf("실수값 입력 >> ");
	scanf_s("%lf", &fnum);
	printf("입력된 실수값 : %.2f\n", fnum);



	return 0;


}
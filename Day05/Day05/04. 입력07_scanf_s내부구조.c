#include <stdio.h>

int main(void)
{
	char ch; int num; double fnum; char word[100];
	// scanf_s 내부 규칙
	// %d, %lf, %s의 규칙
	// 1. 입력의 종료는 엔터가 있으면 끝난다.
	// 2. 값의 구분은 공백문자에 의해서 이루어진다.
	// 3. 첫문자로 공백문자를 만나면 이를 버림처리한다.
	
	// - %c
	// 1. 뭐든 문자라고 식별되면 저장되며, 버림처리하지 않는다.
	// 2. 값의 구분은 서식에 의해서 해야 한다.

	// 100 3.14 A ABC -> 문자값의 묶음으로 전달됨
	// 입력한 내용이 전달되는 곳 : 임시공간(버퍼)
	
	// |1|0|0| |3|.|1|4| |A| |A|B|C|\n|
	scanf_s("%d", &num); // |1|0|0| 읽어서 저장
	scanf_s("%lf", &fnum); // scanf_s 규칙이 | |  (띄어쓰기)는 버린다. 그래서 |3|.|1|4| 읽어서 저장
	// 남은거 >>  | |A|B|C|/n|
	scanf_s(" %c", &ch, 1); // | | 문자는 모든걸 읽을 수 있어서 띄어쓰기를 읽어서 저장  << 단어%c만 유일하게 띄어쓰기 가능
	// |A| |A|B|c|/n|
	scanf_s("%s", word, 100); // 문자열은 띄어쓰기를 읽을 수 없다 |A| 만 읽어서 저장
	// | |A|B|C|/n| 그 뒤의 입력이 없다면 프로그램 종료와 함께 파괴된다.

	printf("%d\n%.2f\n%c\n%s\n", num, fnum, ch, word);
	// %c를 쓰고 싶을 때...
	// 1. 제일 선두에 받던가
	// 2. 유일한 예외로써 서식문자 앞에 띄어쓰기 한칸 넣으면 된다.
	
	return 0;
}
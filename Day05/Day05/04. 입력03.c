#include <stdio.h>

int main(void)
{	// scanf_s : C언어의 만능입력함수
	// 기본적인 이해 : printf의 반대방향
	int num;
	num = 10;
	// printf : 값을 서식에 반영하여 화면에 <문자열>로써 출력한다.
	printf("변수에 저장된 값 : %d\n", num); // 무조건 정해진 수로 나온다.
	scanf_s("입력하는 값 >> %d", & num); /* scanf_s("여기%d", &num) 앞자리에 포멧팅을 제외한 문자가 들어가면
										디버깅시 같은 값을 모두 입력해줘야 입력을 받을 수 있다. 
										※ 이 코드의 경우 디버깅 -> 입력하는 값 >> 25   << 이렇게 해줘야 num에 25 값이 저장이 된다. 
*/
	printf("\n\n바뀐 값 : %d\n", num);
	return 0;
}
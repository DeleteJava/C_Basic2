#include <stdio.h>

int main(void) {
	// 0개 이하가 구체적으로 안되어있는데.....
	int count = 0;
	int sale;
	int price;
	printf("만두의 수량 입력 >> ");
	scanf_s("%d", &count);
	if (count <= 0) {
		printf("나중에 결정될 내용이 될 겁니다...\n");
	}
	else {
		price = count * 500;
		if (count < 50) {
			sale = 0;
		}
		else if (count < 100) {
			sale = 10;
		}
		else {
			sale = 20;
		}
		printf("할인전 가격\t: %d원\n", price);
		printf("할인률\t\t: %d퍼센트\n", sale);
		printf("할인후 가격\t: %d원\n", price * (100 - sale) / 100);
	}
	return 0;
}
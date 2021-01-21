#include <stdio.h> 

int main(void) {

	int num = 0;
	int sum = 0; 
	printf("최대값을 입력해 주세요 : ");
	scanf_s("%d", &num, sizeof(num));

	printf("\n");

	//-- 01.
	for (int i = 1; i <= num; i++) {
		printf("%d ", i);
	}

	printf("\n\n");

	//-- 02.
	for (int i = num; i >= 1; i--) {
		printf("%d ", i);
	}

	printf("\n\n");

	//-- 03 
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 1) {
			sum += i; 
		}
	}

	printf("1부터 %d 까지 숫자들의 홀수의 합은 %d 입니다.\n\n", num, sum);

	return 0; 
}
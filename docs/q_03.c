#include <stdio.h>


int main_04(void) {

	int floor = 0;
	char command = 0; 

	while (1) {
		

		printf("\n층수를 입력해 주세요 (홀수) : ");
		scanf_s("%d", &floor, sizeof(floor));
	

		if (floor % 2 == 0) {
			printf("층수는 홀수여야 합니다, 입력한 수 %d.\n\n", floor);
			continue;
		}

		if (floor < 5) {
			printf("층수는 5층 이상이어야 합니다.\n");
			continue; 
		}

		
		for (int j = 1; j <= floor; j++) {
			for (int k = 1; k <= j; k++) {
				printf("*");
			}
			printf("\n");
		}

		printf("\n");


		for (int i = 1; i <= floor; i++) {
			
			for (int j = 1; j <= floor - i; j++) {
				printf(" "); 
			}

			for (int k = 1; k <= i; k++) {
				printf("*");
			}
			printf("\n");
		}

		printf("\n");


		for (int i = 0; i < floor; i++)
		{

			for (int j = i; j < floor - 1; j++)
			{
				printf(" ");
			}

			for (int k = 0; k < i * 2 + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}

		printf("\n");

	
			printf("피라미드를 다시 그리시겠습니까? ( Y / N ) : ");
			scanf_s(" %c", &command, sizeof(command)); 
			if (command == 'N')  break;

	}

	return 0;
}
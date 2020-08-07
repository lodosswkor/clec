
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    char str[200], result[200];
    int x = 0; 
    int y = 0; 


    printf("문자열을 입력하세요: ");
    scanf("%s", &str);

    printf("시작 인덱스를 입력해 주세요 : ");
    scanf("%d", &x);

    printf("자를 문자열의 길이를 입력해 주세요 : ");
    scanf("%d", &y);


    int length = strlen(str);
    int index = 0; 
    int result_index = 0; 
    
    for (index = x; index  < x + y; index++) {
        result[result_index++] = str[index]; 
    }

    result[result_index] = '\0';
    

    printf("Result : %s\n", result);
    return 0;
}

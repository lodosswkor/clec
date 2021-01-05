
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    char str[200];
    printf("영문자열을 입력하세요: ");
    scanf("%s", &str);
   
    printf("입력문자열 : %s\n", str);

    int length = strlen(str); 
    char tmp = 0; 

     //----------------------------

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (str[j] > str[j + 1]) {
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }

    str[length + 1] = '\0';


    //---------------------------
    
    printf("정렬문자열 : %s\n", str);
    return 0;
}

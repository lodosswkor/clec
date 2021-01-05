
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include<stdio.h>


int main()
{
    int input;


    do {

        printf("============================================\n");
        printf("=         도서관리 프로그램 v0.0.1         =\n");
        printf("============================================\n");
        printf("1.도서검색  2.도서등록  3.도서변경  4.도서삭제   5.도서대출  \n");
        printf("6.회원검색  7.회원등록  8.회원변경  9.회원삭제   10.정보저장 \n");
        printf("0.Exit \n\n");

        printf("번호를 입력해주세요! : ");

        scanf("%d", &input);

        switch (input) {
            case 0:
                printf("프로그램을 종료합니다.\n\n");
                break; 
            case 1:
                printf("1.도서검색 선택\n\n");
                break;
            case 2:
                printf("2.도서등록 선택\n\n");
                break;
            case 3:
                printf("3.도서변경 선택\n\n");
                break;
            case 4:
                printf("4.도서삭제 선택\n\n");
                break;
            case 5:
                printf("5.도서대출 선택\n\n");
                break;
            case 6:
                printf("6.회원검색 선택\n\n");
                break;
            case 7:
                printf("7.회원등록 선택\n\n");
                break;
            case 8:
                printf("8.회원변경 선택\n\n");
                break;
            case 9:
                printf("9.회원삭제 선택\n\n");
                break;
            case 10:
                printf("10.정보저장 선택\n\n");
                break;
            default:
                printf("1~10까지의 번호를 입력해 주세요.\n\n");
        }

    } while (input != 0);

    return 0;
}
# Quiz
---

아래의 소스를 참조하여 도서를 입력받고 출력하는 프로그램을 작성해 주세요. 
(구조체를 사용합니다.)

결과는 아래와 같습니다.

<b>1. 프로그램 시작</b>

<img src="/images/lec05/05-01.png" width="90%"/>

<b>2. 도서 입력</b>
   
<img src="/images/lec05/05-02.png" width="90%"/>

<b>3. 도서 목록 출력 </b>

<img src="/images/lec05/05-03.png" width="90%"/>

<b>4. 도서 목록 출력 (도서가 없는 경우 )</b>

<img src="/images/lec05/05-04.png" width="90%"/>
   
      
```c
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>


//-- 함수원형 
int printMainConsole(); // 메인 명령어 출력함수 
void insertBook(); // 1. 도서입력 함수 
void printBooks(); // 2. 도서목록 출력함수 


//-- 도서 구조체 
struct _Book {
    char code[100];
    char name[100];
    char author[100]; 
};

typedef struct _Book BOOK;


BOOK book_store[200]; //-- 도서 구조체 배열 
int index = 0; //-- 도서 구조체 배열 인덱스


int main()
{
    int cmd = 0;
    while (1) {

        cmd = printMainConsole();
        if (cmd == 0) break;

        switch (cmd) {
        case 1:
            insertBook();
            break;

        case 2:
            printBooks();
            break;

        default:
            printf("\n'%d'는 사용하지 않는 번호입니다. \n\n", cmd);
        }
    }

    printf("\n프로그램을 종료합니다.");
    return 0;
}




/// <summary>
//  메인 명령어 입력화면 출력  
/// </summary>
int printMainConsole() {

    int command = 0;

    printf("------------------------------------------------------\n");
    printf("도서관리 프로그램 v0.9\n");
    printf("------------------------------------------------------\n");
    printf("1. 도서등록 \n");
    printf("2. 도서출력 \n");
    printf("0. 프로그램 종료 \n\n");

    printf("번호를 입력해 주세요. : ");
    scanf("%d", &command);

    return command;

}


/// <summary>
//   책 정보 넣기 
/// </summary>
void insertBook() {

    /*
    strcpy(book_store[index].author, "작가명");
    strcpy(book_store[index].name, "책이름");
    strcpy(book_store[index].code, "책코드");
    */
    
    /*
    printf("\n");

    printf("책이름 : ");
    scanf("%s", book_store[index].name,);
    fflush(stdin); 
    */

    .... 

    printf("\n책을 입력하였습니다. (총 %d권)\n\n", index + 1); 
    index++;
}

/// <summary>
//   입력한 책 출력하기 
/// </summary>
void printBooks() {

        printf("\n\n----------------------------------------------------------------------------\n");
        printf("%-10s | %-10s | %-20s | %-20s \n", "번호", "코드", "책이름", "작가");
        printf("----------------------------------------------------------------------------\n");

}

 
```
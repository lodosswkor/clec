# Quiz
---

1. 전 단원의 Quiz에서 구조체 배열 (book_store[200])을 "메모리 동적할당"을 사용해
동적 배열로 변경하도록 한다. 

2. 구조체 _Book에 함수포인터를 사용하여 자기자신을 출력하는 함수를 추가해서 호출한다. 

<br/>
<br/>

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
void printBooks(); // 2. 책 출력함수 
void printSelf(); 


//-- 책 구조체 
struct _Book {
    char code[100];
    char name[100];
    char author[100]; 
    void (*printSelf)(); 
};

typedef struct _Book BOOK;


BOOK book_store[200]; //-- 변경대상 
int index = 0;


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
    printf("\n");

    printf("책이름 : ");
    scanf_s("%s", book_store[index].name, sizeof(book_store[index].name));
    fflush(stdin); 

    printf("작가이름 : ");
    scanf_s(" %s", book_store[index].author, sizeof(book_store[index].author));
    fflush(stdin);

    printf("책 코드 : ");
    scanf_s(" %s", book_store[index].code, sizeof(book_store[index].code));

    printf("\n책을 입력하였습니다. (총 %d권)\n\n", index + 1); 
    index++;
}

/// <summary>
//   입력한 책 출력하기 
/// </summary>
void printBooks() {

    if (index > 0) {

        printf("\n\n----------------------------------------------------------------------------\n");
        printf("%-10s | %-10s | %-20s | %-20s \n", "번호", "코드", "책이름", "작가");
        printf("----------------------------------------------------------------------------\n");

        for (int i = 0; i < index; i++) {
            printf("%-10d | %-10s | %-20s | %-20s\n", i + 1, book_store[i].code, book_store[i].name, book_store[i].author);
        }

        printf("\n\n");
    }
    else {
        printf("\n입력된 책이 존재하지 않습니다.\n\n");
    }
}

/// <summary>
//  구조체에 포함될 함수 
/// </summary>
void printSelf() {

}
```

<br/>
<br/>
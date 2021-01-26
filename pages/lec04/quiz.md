# Quiz
---

#### Quiz 1. 
   
   - 사용자에게 임의의 문자열을 받아 이를 정렬하는 코드를 작성하라. 

```c

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

    //-------------------
    // 코드입력 ....
    //-------------------
    
    printf("정렬문자열 : %s\n", str);
    return 0;
}


``` 
<img src="/images/lec04/quiz01.png" width="700">


#### Quiz 2. 
   
   - 사용자에게 문자열과 시작인덱스 그리고 문자열의 길이를 입력받아, 문자열을 자르는 코드를 작성하라.
    

```c
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

    //-------------------
    // 코드입력 ....
    //-------------------

    printf("Result : %s\n", result);
    return 0;
}

   
``` 

<img src="/images/lec04/quiz02.png" width="700">

#### Quiz 3. 
   - 임의의 숫자를 받아, 이를 이진수로 변환/출력하는 코드를 작성하라. 


<img src="/images/quiz/array_q0101.png">

   
```c
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>

int main(void) {

   char binary[100] = {0}; 
   int i = 0;

   // logic ... 
   
   printf("\n변환된 2진수는 : ");
    
   for (int j = 0; j < i; j++){
      printf("%d", binary[j]);
   }
    
   printf("입니다.\n");
   return 0; 
}
```

#### Quiz 4. 
   - 5x5의 이차원 배열을 생성하고, 값을 입력하여 아래와 같은 결과를 출력하도록 한다. 

   ex) arr[0][0] = 1, arr[0][1] = 6 .....
   
<img src="/images/quiz/array_q02.png">

```c
#include <stdio.h>

int main(void) {
 int arr[5][5];


 // logic 

 // 출력부분
 for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++) {
   printf("%d\t", arr[i][j]);
  }
  printf("\n");
 }

 return 0;
}
```







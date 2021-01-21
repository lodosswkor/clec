# QUIZ
---

<b>1. 조건문과 반복문으로 "짝수"만 출력하는 프로그램을 만들어라 
   * scanf 로 최대값을 입력 받은 후, 1부터 최대값까지의 짝수는 출력하는 프로그램을 작성한다. </b>

```c
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>

int main() {

    int max = 0;
    printf("최대값을 입력하세요: "); 
    scanf("%d", &max);

    ...
    
    return 0; 
}
```

<b>2. 아래는 구구단을 출력하는 반복문이다.</b>

```c
//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>

int main() {

   for(int i = 1 ; i <= 9; i ++) {

     printf("\n---- %d단 ----\n", i);
     for( int j = 1 ; j <= 9; j ++ ) {
         printf("%d x %d = %d\n", i, j, i*j);
     }
   }

}
```

위 예제를 응용하여 아래와 같은 구구단 테이블을 출력하라.  
(반복문과 이스케이프시퀀스인 \t를 활용)

<img src="/images/lec03/quiz.png" width="100%" style="border:1px solid black;">


<b>3. 주사위 두개를 던져서 합이 6의될 경우의 수를 출력하라 </b>  
<img src="/images/quiz/01.png" width="300" style="border:1px solid black;">  


<b>4. 조건문과 반복문으로 "최대값"을 입력받아 이를 출력하고, 역출력 후에, 홀수의 합계를 출력하는 프로그램을 만들어라 </b>  
<img src="/images/quiz/02.png" width="100%" style="border:1px solid black;">  


<b>5. 아래와 같은 결과를 출력하는 "피라미드 생성기"를 작성하라 </b>  
<img src="/images/quiz/03.png" width="100%" style="border:1px solid black;">  
  


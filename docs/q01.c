#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num = 0,temp=0,i=0;
    short binary[64] = { 0 };
    printf("\n2진수로 변환시킬 10진수를 입력해주세요. : 10 ");
    
    //scanf("%d", &num);
    num = 10;
    
    while (temp != 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
 
    printf("\n변환된 2진수는 : ");
    for (int j = 0; j < i; j++)
        printf("%d", binary[j]);
    
    printf("입니다.");
 
    printf("\n");
    system("pause");
    return 0;
}
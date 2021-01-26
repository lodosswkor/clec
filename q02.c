#include <stdio.h>

int main(void) {
 int arr[5][5];

 for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++) {
   arr[j][i] = 1 + j + i * 5; 
  }
 }

 for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++) {
   printf("%d\t", arr[i][j]);
  }
  printf("\n");
 }

 return 0;
}


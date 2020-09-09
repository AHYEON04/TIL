#include <stdio.h>

int main() {
  
  int arr[6] = { 3, 7, 2, 5, 1, 4 };
  int i, j; // 반복문에 사용할 변수
  int temp; // 두 값을 바꿀 때 사용할 변수
  int length = sizeof(arr) / sizeof(int);
  
  printf("정렬 전 : ");
  for(i = 0; i < length; i++) {
    printf("%d ", arr[i]); 
  }

  for(i = 1; i < length; i++) {
    temp = arr[i];
    j = i - 1;
    while(j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = temp;
  }

  printf("\n정렬 후 : ");
  for(i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}


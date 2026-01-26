#include <stdio.h>
/*
  1. 입력 배열 중에서 첫 번째 데이터를 최솟값으로 지정한다.
  2. 배열에서 다음 숫자를 읽고, 이것과 저장된 최솟값을 비교한다.
  3. 비교 후 더 작은 숫자를 최솟값으로 다시 지정한다.
  4. 배열에 처리할 데이터가 남아 있으면 [2단계]로 간다.
  5. 저장된 최솟값을 결과로 출력한다.
*/


// 최솟값

// int main () {
//   int arr[5] =  {7, 2, 10, 5, 1};
//   int arrLen = sizeof(arr) / sizeof(arr[0]);
//   int min = arr[0];
//   for (int i = 1; i < arrLen; i++) {
//     if (min > arr[i]) {
//       min = arr[i];
//     }
//   }
//   printf("최솟값은 => %d", min);
// };

// 최대값

int main () {
  int arr[5] = {20, 30, 5, 70, 15};
  int len = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];
  for (int i = 1; i < len; i++) {
    if (max < arr[i]) {
      max = arr[i];
    };
  }
  printf("최대값은  => %d", max);
}
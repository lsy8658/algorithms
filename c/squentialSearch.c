#include <stdio.h>
/*
    순차탐색 ( sequential search )
    쉽게 말하면 순서대로 찾는 알고리즘이다.
*/
void sequentialSearch(int A[], int n, int key) { 
    // A 입력 배열, n 배열 크기 ( 테이터 개수 ), key 탐색키 ( 찾으려는 값 )
    int i = 0;
    while (i < n && A[i] != key) {
        i++;
        return i < n ? i : -1;

    }
    printf("%d", i);
}

int main () {
    int A[4] ={5,2,7,11};
    int len = sizeof(A)/sizeof(A[0]);
    sequentialSearch(A, len, 11);
}
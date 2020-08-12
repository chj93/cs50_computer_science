#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    // sizeof(arr) 로 총 arr 배열이 차지하는 공간의 크기를 측정 후
    // 각 요소(여기서는 integer) 가 차지하는 공간으로 나누어주면 배열의 갯수를 측정할 수 있습니다.

    for(int i=0; i<n; i++) {
        printf("%d\t", *(arr+i));		//배열의 포인터 접근을 위한 방법, \t 의 경우 tab 과 같은 역할을 함
    }
    printf("\n");
}
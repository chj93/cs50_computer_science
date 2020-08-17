#include <stdio.h>

//프로토타입선언
void sort(int n, int* arr);

//메인
int main(void){
    int arr[7] = {0,25,10,17,6,12,9};
    int n = sizeof(arr)/sizeof(int);

    sort(n,arr);

    //출력
    for(int idx=0; idx<n;idx++){
        printf("%d \t",*(arr+idx));
    }
    return 0;
}

//버블정렬 좀더 간략히
void sort(int n, int* arr){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int tmp = *(arr+j+1);
                *(arr+j+1) = *(arr+j);
                *(arr+j)=tmp;
            }
        }
    }
}
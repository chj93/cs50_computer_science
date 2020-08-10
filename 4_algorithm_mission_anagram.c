#include <stdio.h>
#include <cs50.h>

void printArr(int arr[], int leng);
void sort(int arr[],int leng);
void compare(int arrA[], int arrB[],int leng);

int main(){

    const int LENGTH=5;
    int arrA[LENGTH];
    int arrB[LENGTH];

    //사용자에게 첫번째 배열의 값 입력받기
    printf("첫번째 배열의 값을 받습니다.\n");
    for(int i=0; i<LENGTH;i++){
        arrA[i]=get_int("첫번째 배열 값: 한자리 수의 값을 입력하세요.\n");
    }
    printArr(arrA,LENGTH);

    //사용자에게 두번째 배열의 값 입력받기
    printf("두번째 배열의 값을 받습니다.\n");
    for(int i=0; i<LENGTH;i++){
        arrB[i]=get_int("두번째 배열 값: 한자리 수의 값을 입력하세요.\n");
    }
    printArr(arrB,LENGTH);

    //배열 정렬호출
    sort(arrA,LENGTH);
    sort(arrB,LENGTH);

    //두 배열의 값 비교 결과 호출
    compare(arrA,arrB,LENGTH);
}

//배열 출력
void printArr(int arr[], int leng){
    printf("값=");
    for(int i=0; i<leng;i++){
       printf("  %i  ",arr[i]);
    }
    printf("\n");
}

//배열 정렬 - 재귀함수로. 실패!
/*void sort(int arr[],int leng){

    int temp;
    int ckIdx=1;

    for(int i=0;i<leng;i++){
        if(arr[i]>arr[ckIdx]){
            temp=arr[ckIdx];
            arr[ckIdx]=arr[i];
            arr[i]=temp;
        }
    }
    ckIdx++;
    if(ckIdx<=leng) sort(arr,leng);
}*/

//배열 정렬
void sort(int arr[], int leng){
    int temp;
    for(int i=0;i<leng;i++){
        for(int j=0; j<leng-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

//배열 값 비교
void compare(int arrA[], int arrB[],int leng){

    for(int i=0; i<leng;i++){
        if(arrA[i]!=arrB[i]){
            printf("두 배열은 서로 애너그램이 아닙니다.\n");
            return;
        }
    }
    printf("두 배열은 서로 애너그램이 맞습니다.\n");
}

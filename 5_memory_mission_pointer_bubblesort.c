#include<stdio.h>
#include<cs50.h>

//프로토타입선언
void sort(int n,int arr[]);

//메인함수
int main(void){
   int n=7;
   int arr[7]={0,25,10,17,6,12,9};
   sort(n,arr);
   return 0;
}

//버블정렬
void sort(int n,int arr[]){
    int temp=0;
    int *pn=&n;
    int *parr=&arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
        if(*(parr+j)>*(parr+j+1)){
            temp=*(parr+j);
            *(parr+j)=*(parr+j+1);
            *(parr+j+1)=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d  ",*(parr+i));
    }
}
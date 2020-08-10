
#include<stdio.h>
#include<string.h>
int main(void){
int num[]={4,3,2,1,6};
int num2[]={6,2,3,4,1};
int cnt=0;
 printf("입력값:");
for(int i=0;i<5;i++){
        printf(" %d ",num[i]);
     }
   printf(",");
     for(int i=0;i<5;i++){
         printf(" %d ",num2[i]);
    }
     printf("--> 출력값:");
int numLength2=sizeof(num2)/sizeof(num2[0]);
int numLength=sizeof(num)/sizeof(num[0]);
int temp;

    for(int i=0;i<numLength;i++){
        for(int j=0;j<numLength-1;j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }

    }
       for(int i=0;i<numLength2;i++){
        for(int j=0;j<numLength2-1;j++){
            if(num2[j]>num2[j+1]){
                temp=num2[j];
                num2[j]=num2[j+1];
                num2[j+1]=temp;
            }
        }

    }
for(int i=0;i<numLength2;i++){
    if(num[i]==num2[i]){
        cnt++;
    }
}

  if(cnt==5){
         printf("True");
         }else{
             printf("False");
         }


}
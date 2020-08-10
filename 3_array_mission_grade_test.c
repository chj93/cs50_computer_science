#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const string GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void PrintScoreTable();
int setGrade();

int main(void){

    printf("[학점 프로그램]\n종료를 원하면 999를 입력하세요.\n");
    PrintScoreTable();
    setGrade();

}

void PrintScoreTable(){
    printf("[학점 테이블]\n");
    printf("점수 : ");

    for(int i = 0; i < NUMBER_OF_GRADES; i++){
        printf(" %d\t", SCORES[i]);
    }

    printf("\n학점 : ");
    for(int i = 0; i < NUMBER_OF_GRADES; i++){
        printf(" %s\t", GRADES[i]);
    }
    printf("\n");
}

int setGrade(){
   while(true){
        int score = get_int("성적을 입력하세요(0~100) : ");

        if(score < 0 || score > 100){
            printf("** %i 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
            continue;
        }

        else{
            //const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
            //const string GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F

            for(int i=0; i<NUMBER_OF_GRADES; i++){
/*                if(score>=SCORES[0]){
                    printf("학점은 %s 입니다\n", GRADES[0]);
                }*/
                if(score>=SCORES[i]){
                    printf("학점은 %s 입니다\n", GRADES[i]);
                }
            }
/*
            if(score >= 95 ){
                printf("학점은 %s 입니다\n", GRADES[0]);
            }
            else if(score >= 90 ){
            printf("학점은 %s 입니다\n", GRADES[1]);
            }
            else if(score >= 85 ){
            printf("학점은 %s 입니다\n", GRADES[2]);
            }
            else if(score >= 80 ){
            printf("학점은 %s 입니다\n", GRADES[3]);
            }
            else if(score >= 75){
            printf("학점은 %s 입니다\n", GRADES[4]);
            }
            else if(score >= 70 ){
            printf("학점은 %s 입니다\n", GRADES[5]);
            }
            else if(score >= 65 ){
            printf("학점은 %s 입니다\n", GRADES[6]);
            }
            else if(score >= 60 ){
            printf("학점은 %s 입니다\n", GRADES[7]);
            }
            else if(score < 60 && score >= 0){
            printf("학점은 %s 입니다\n", GRADES[8]);
            }*/

            }
    }
    return 0;
}

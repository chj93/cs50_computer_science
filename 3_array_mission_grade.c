#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//const로 상수 선언
const int INDEX_OF_GRADES = 9;
const int SCORES[INDEX_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const string GRADES[INDEX_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

//함수 프로토 타입 선언
void PrintScoreTable();
int setGrade();

int main(void){
    //메세지 출력
    printf("[학점 프로그램]\n종료를 원하면 999를 입력하세요.\n");
    //함수 호출
    PrintScoreTable();
    setGrade();

}

//학점 테이블 함수
void PrintScoreTable(){
    printf("[학점 테이블]\n");
    printf("점수 : ");

    for(int i = 0; i < INDEX_OF_GRADES; i++){
        printf(" %d\t", SCORES[i]);
    }

    printf("\n학점 : ");
    for(int i = 0; i < INDEX_OF_GRADES; i++){
        printf(" %s\t", GRADES[i]);
    }
    printf("\n");
}

//학점 입력 함수
int setGrade(){
   while(true){
        int score = get_int("성적을 입력하세요(0~100) : ");

        for(int i=0; i<INDEX_OF_GRADES; i++){
            if(score==999){
                printf("프로그램을 종료합니다.\n");
            return false;

            }else if(score < 0 || score > 100){
                printf("** 입력값:%i | 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
                continue;

            }else if(score>=SCORES[i]){
                printf("학점은 %s 입니다\n", GRADES[i]);
                break;
            }
        }
    }
}


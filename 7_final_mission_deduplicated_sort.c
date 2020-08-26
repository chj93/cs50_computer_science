#include <stdio.h>
#include <stdlib.h>
/*미션 4

1. 미션 제목
중복 빼고 정렬하기

2. 지시문
    N개의 정수가 주어진다. 이때, N개의 정수를 오름차순으로 정렬하는 프로그램을 작성하시오. 같은 정수는 한번만 출력한다.

    조건 및 질문
       - 구현체를 위 문제은행에 제출하여 성공하시오
       - 본인의 구현체의 시간복잡도를 구하시요
       - 해당 문제에서 본인의 구현체보다 빠른 답이 있을까요?

3. 핵심 개념
    #정렬 #중복 #빅오표기법 #big O notation
*/

int overlap(int *ary); //중복제거 함수
int sort(int *ary); //정렬 함수
int print(int *ary);

int main()
{
    int ary[6]={6,1,4,6,1,4};
    overlap(ary);
    sort(ary);
    print(ary);
}


/*int overlap(int* ary)
    {
        int i,j,save;
        for(i=0;i<5;i++)
        {
/*            while(1)
            {*/
                //ary[i] = ((rand() % 45) + 1);
                save=0; //스위치 변수
                for(j=0;j<i;j++)
                {
                    if(ary[i] == ary[j]) // 중복값 확인
                    {
                        save = 1;
                        break; //중복값 확인시 for문 종료
                    }
                }
                if(save==0)
                {
                    break; //스위치가 0이면 중복 X while문 종료
                }
            //}
        }
        return 0;
    }*/

int overlap(int* ary)
    {
    int count=0;
        for(i=0;i<5;i++)
        {
            if(ary[i] == ary[j])
            {
                count++;
            }
            newAry[count];
        }
    }


   //정렬 함수
    int sort(int *ary)
    {
        int tmp,i,j;
        tmp=0;
        for(i=0;i<3;i++) // 2 / n(n-1)회전
        {
            for(j=0;j<4;j++)
            {
                if(ary[j] > ary[j+1]) //오름차순 정렬시 [j] > [j+1] 클 경우 자리교환
                   {
                      tmp = ary[j];
                      ary[j] = ary[j+1];
                   ary[j+1] = tmp;
                }
            }
        }
        return 0;
    }

    //출력함수
    int print(int *ary)
    {
        int k;
        for(k=0;k<5;k++)
        {
            printf("[%d]",ary[k]);
        }
        return 0;
    }
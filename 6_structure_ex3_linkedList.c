#include <stdio.h>
#include <stdlib.h>

typedef struct node
//node 구조체 정의 - Linked list의 기본단위
    //(node=직사각형으로 나타낼 수 있는 메모리 덩어리를 의미)
{
    int number;
    //정수
    struct node *next;
    //다음에 올 정수의 주소. node구조체를 가르키도록 정의
}
node;
//node 구조체의 별칭 지정

int main(void)
{
    node *list = NULL;
    // list라는 이름의 node 포인터를 정의. 연결 리스트의 가장 첫 번째 node
    // 현재 아무 것도 가리키고 있지 않기 때문에 NULL 로 초기화

    node *n = malloc(sizeof(node));
    //node의 주소인 포인터 *n으로 새로운 node를 위해 node의 크기만큼 메모리를 할당
    if (n == NULL)
    {
        return 1;
    }

    n->number = 1;
    // == (*n).number=1;
    // n이 가리키는 node(주소)의 number 필드의 값을 1로 저장

    n->next = NULL;
    // n 다음에 정의된 node가 없으므로 NULL로 초기화

    list = n;
    //n포인터에 첫번째 node를 정의했으므로 list 포인터를 n포인터로 바꿔줌.

    n = malloc(sizeof(node));
    //추가 node를 저장(연결)하기 위해 n에 새로운 메모리를 다시 할당
    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->next = NULL;
    //n에 두번째 값 저장

    list->next = n;
    //첫번째 node가 저장된 list의 next에 두번째 node가 저장된 n포인터로 지정.

    n = malloc(sizeof(node));
    //추가 node를 저장(연결)하기 위해 n에 새로운 메모리를 다시 할당
    if (n == NULL)
    {
        return 1;
    }

    n->number = 3;
    n->next = NULL;
    //n에 세번째 값 저장

    list->next->next = n;
    // 현재 list는 첫번째 node를 가리키고, 이는 두번째 node와 연결되어 있음
    // 세 번째 node를 더 연결하기 위해서
    //첫 번째 node (list)의 다음 node(list->next)의 다음 node(list->next->next)를 n 포인터로 지정.

    node *tmp=list;
    while (tmp->next !=NULL)
    //tmp가 가르키는 곳이 NULL이 아닐 경우
    {
        tmp=tmp->next;
        //업데이트 되도록
    }


    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }
    //출력. list에 연결된 node를 처음부터 마지막 node의 next가 NULL이 아닐때까지 각 number 값을 출력

    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    //메모리 해제. list에 연결된 node들을 처음부터 마지막까지 해제
}
#include <stdio.h>
#include <stdlib.h>
/*1. 미션 제목
연결리스트로 Stack 만들기

2. 지시문
EDWITH CS50 강좌에서 배운 Stack을 보조미션 1에서 배열을 이용해서 구현해 보셨는데요, 이번에는 연결리스트를 이용해서 Stack을 구현하는 과제입니다. 지난 문제와 마찬가지로 아래 표에 함수의 주석 처리된 부분들에 여러분의 코드를 채워 넣어주세요.
*/

//stackNode 구조체 정의
typedef struct stackNode {
    int data;
    struct stackNode* next;
} StackNode;


//stackNode 생성
StackNode* createStackNode(int data) {
    StackNode* node = (StackNode*)malloc(sizeof(StackNode));
    node->data = data;
    node->next = NULL;
    return node;
}

//빈값 여부 확인
int isEmpty(StackNode* root) {
    return root;
}

//데이터 추가
void push(StackNode** root, int data) {
    StackNode*node=createStackNode(data);
    //새로운 노드생성
    node->next=*root;
    //기존의root를 next에 연결
    *root=node;
    //root를 새로운노드로 변경

    printf("%d pushed to stack\n", data);
}

//데이터 삭제(추출)
int pop(StackNode** root) {
    if (isEmpty(*root))
        return -9999;
    int popped;

    StackNode*temp=*root;
    //root 노드의 주소를 temp에 저장
    popped=temp->data;
    //root노드의 data를 popped 변수에 저장
    *root=temp->next;
    //root노드를 기존root의 next노드로 변경
    free(temp);
    //이전 root노드(temp)를 제거

return popped;
}

//데이터 반환
int peek(StackNode** root) {
    if (isEmpty(*root))
        return -9999;
    return (*root)->data;
}

int main() {
    StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);

    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));

    push(&root, 50);
    printf("%d peeked from stack\n", peek(&root));
    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));
    printf("%d pop from stack\n", pop(&root));
    return 0;
}
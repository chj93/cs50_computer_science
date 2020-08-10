# cs50_computer_science

3_array_mission_grade.c - 배열미션 제출
1. 미션 제목
    학점을 계산해보자!

 

2. 지시문
    - 학생의 점수로 학점을 구하는 프로그램을 작성하시오.
    - 키보드에서 입력받은 성적 (0 ~ 100 점) 의 유효성을 체크
    - 학점은 배열을 이용하여 초기화 (아래 “학점 테이블” 참조)
    - 학점은 “학점” 과 같이 계산하는데, 반드시 “학점 테이블”을 사용하여 계산하고 학점도 “학점 테이블”의 내용을 출력
    - 성적을 입력하여 계속 학점을 구하며 특별한 문자인 “-1” 을 입력하면 프로그램을 종료

 

Table 1 - 학점


 

Table 2 - 학점 테이블


 

유효성 체크: 0 <= 성적 <= 100
    - “120” 입력 -> 성적을 올바르게 입력하세요! (0 ~ 100)

4_algorithm_mission_anagram - 알고리즘 미션 제출
1. 미션 제목
숫자 애너그램 찾기

 

 

2. 지시문
‘애너그램’이란 문자를 재배열하여 다른 뜻을 가진 단어로 바꾸는 것을 말합니다. 예를 들면 영어의 ‘tea’와 ‘eat’과 같이, 각 단어를 구성하는 알파벳의 구성은 같지만 뜻은 다른 두 단어를 말합니다. 우리말에는 ‘문전박대’와 ‘대박전문’과 같은 예를 들 수 있습니다. 우리는 문자 대신 숫자를 이용해서 애너그램을 찾는 프로그램을 만들어봅시다. 5자리의 숫자 1쌍이 입력으로 주어지며 애너그램일 경우에는 “True”를 아닐 경우에는 “False”를 출력하도록 합시다. 숫자를 입력받는 부분은 따로 구현하지 않고 프로그램 내부에 배열로 선언하는 것으로 가정하고, 숫자에는 중복이 있을 수 있습니다.


예)
입력값: 12345, 54321 -> 출력값: True
입력값: 14258, 25431 -> 출력값: False
입력값: 11132, 21131 -> 출력값: True


3. 핵심 개념
#애너그램 #정렬알고리즘
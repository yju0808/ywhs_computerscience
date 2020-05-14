//교과서 55쪽 "if~ else~ 중첩선택구조로 바꾸기" 풀이

#include <stdio.h>

int s;

int main()
{
    scanf("%d", &s);

    if (s == 12 || s == 1 || s == 2)
    {
        printf("winter\n");
    }
    else
    {
        if (s == 3 || s == 4 || s == 5)
        {
            printf("spring\n");
        }
        else
        {
            if (s == 6 || s == 7 || s == 8)
            {
                printf("summer\n");
            }
            else
            {
                printf("fall\n");
            }
        }
    }
    
}

/*
코드설명

9 int하나 입력받아서 s에 넣습니다
11 s가 12혹은 1혹은 2라면 winter를 출력합니다
17 s가 3혹은 4혹은 5라면 spring을 출력합니다
23 s가 6혹은 7혹은 8이라면 summber를 출력합니다
27 이도저도 아니면 fall을 출력합니다

살펴볼포인트
if~ else if~ else~ 구문으로 하면 훨씬 보기편하지 않나요? --> 예 맞죠 누가이렇게 코드작성합니까 다만 교과서에서 이렇게 하래요 "if~ else~ 중첩선택구조"가 이런거 말하는 겁니다
||은 or(혹은) 이라는 의미입니다 하나만 참이면 참입니다. 반대로 &&는 and(그리고) 입니다 둘다 참이여야 참입니다 



*/
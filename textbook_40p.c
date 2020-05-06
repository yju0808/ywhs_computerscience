//교과서 40쪽 "간단한 산술 계산기" 문제풀이

#include <stdio.h>


int main()
{


    int a;
    int b;


    printf("두 정수를 입력하세요 ");
    scanf("%d %d",&a,&b);
    
    //출력
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %.2f\n",a,b,(float)a / b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);

}




/*
코드설명

10~11 int형 변수를 선언합니다
14  "두 정수를 입력하세요 " 출력
15  두 정수를 입력받고 각각 a,b에 저장

18~23 형식에 맞게 출력


살펴볼 포인트
21줄에 %.2f는 소수점 2자리까지 출력합니다
21줄에 a앞에 (float)을 붙인건 실수형으로 연산하게 하기 위해서 입니다 안붙이면 정수형으로 연산되서 소수점 이하가 다 날라가요
--> 그럼 둘다 붙여줘야 하지 않나요?: 하나만 붙이면 컴파일러가 자동으로 실수형으로 계산해줍니다



*/
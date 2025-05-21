#include <stdio.h>

// 함수 선언
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

// 테스트 함수 선언
void test_operations();

int main() {
    int num1, num2;

    // 테스트 실행
    test_operations();

    // 사용자 입력 받기
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);
    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    // 연산 결과 출력
    printf("\n[산술 연산 결과]\n");
    printf("덧셈: %d\n", add(num1, num2));
    printf("뺄셈: %d\n", subtract(num1, num2));
    printf("곱셈: %d\n", multiply(num1, num2));

    if (num2 != 0) {
        printf("나눗셈: %.2f\n", divide(num1, num2));
    } else {
        printf("나눗셈: 0으로 나눌 수 없습니다.\n");
    }

    return 0;
}

// 함수 정의
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b;
}

// 테스트 함수
void test_operations() {
    printf("[테스트 실행 중...]\n");

    if (add(10, 5) != 15) {
        printf("add 함수 테스트 실패\n");
    }
    if (subtract(10, 5) != 5) {
        printf("subtract 함수 테스트 실패\n");
    }
    if (multiply(10, 5) != 50) {
        printf("multiply 함수 테스트 실패\n");
    }
    if (divide(10, 5) != 2.0f) {
        printf("divide 함수 테스트 실패\n");
    }

    printf("테스트 완료.\n\n");
}

#include <stdio.h>

// �Լ� ����
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

// �׽�Ʈ �Լ� ����
void test_operations();

int main() {
    int num1, num2;

    // �׽�Ʈ ����
    test_operations();

    // ����� �Է� �ޱ�
    printf("ù ��° ������ �Է��ϼ���: ");
    scanf("%d", &num1);
    printf("�� ��° ������ �Է��ϼ���: ");
    scanf("%d", &num2);

    // ���� ��� ���
    printf("\n[��� ���� ���]\n");
    printf("����: %d\n", add(num1, num2));
    printf("����: %d\n", subtract(num1, num2));
    printf("����: %d\n", multiply(num1, num2));

    if (num2 != 0) {
        printf("������: %.2f\n", divide(num1, num2));
    } else {
        printf("������: 0���� ���� �� �����ϴ�.\n");
    }

    return 0;
}

// �Լ� ����
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

// �׽�Ʈ �Լ�
void test_operations() {
    printf("[�׽�Ʈ ���� ��...]\n");

    if (add(10, 5) != 15) {
        printf("add �Լ� �׽�Ʈ ����\n");
    }
    if (subtract(10, 5) != 5) {
        printf("subtract �Լ� �׽�Ʈ ����\n");
    }
    if (multiply(10, 5) != 50) {
        printf("multiply �Լ� �׽�Ʈ ����\n");
    }
    if (divide(10, 5) != 2.0f) {
        printf("divide �Լ� �׽�Ʈ ����\n");
    }

    printf("�׽�Ʈ �Ϸ�.\n\n");
}

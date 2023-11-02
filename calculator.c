#include <stdio.h>

void sum(int n1, int n2) {
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void sub(int n1, int n2) {
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
}

void mul(int n1, int n2) {
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
}

void div(int n1, int n2) {
    if (n2 != 0) {
        printf("%d / %d = %d\n", n1, n2, n1 / n2);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

int main() {
    int num1;
    int num2;
    char operator;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("num1: %d\n", num1); // Add format specifier %d
    printf("num2: %d\n", num2); // Add format specifier %d

    if (operator == '+') {
        printf("Adding\n");
        sum(num1, num2);
    } else if (operator == '-') {
        printf("Subtracting\n");
        sub(num1, num2);
    } else if (operator == '*') {
        printf("Multiplying\n");
        mul(num1, num2);
    } else if (operator == '/') {
        printf("Dividing\n");
        div(num1, num2);
    } else {
        printf("Wrong Operator\n");
    }

    return 0;
}

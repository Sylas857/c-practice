#include <stdio.h>

/* 一个用 switch 写的小计算器，练你正在学的 switch 语句 */
int main(void) {
    char op;
    double a, b;

    printf("Enter an expression like: 3 + 4\n");
    printf("Operators: + - * /\n");
    printf("> ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            else
                printf("Error: divide by zero\n");
            break;
        default:
            printf("Unknown operator: %c\n", op);
    }

    return 0;
}

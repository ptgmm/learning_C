#include <stdio.h>

int main()
{
    float number1;
    char op;
    float number2;
    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &number2);


    if (op == '+') {
        printf("%f", number1 + number2);
    }
    else if (op == '-') {
        printf("%f", number1 -  number2);
    }
    else if (op == '*') {
        printf("%f", number1 * number2);
    }
    else if (op == '/') {
        printf("%f", number1 / number2);
    }
    else {
        printf("Error");
    }

    return 0;
}

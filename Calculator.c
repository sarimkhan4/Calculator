#include <stdio.h>

int main() {

    char operator;
    double num1, num2, result;

    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter First Number: ");
    scanf("%lf", &num1);

    printf("Enter Second Number: ");
    scanf("%lf", &num2);


    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num1 != 0) {
                if (num2!= 0){
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }     
            } else {
                printf("Error,Anyone Number is Zero\n");
            }
            break;

        default:
            printf("Error, Invalid operator.\n");
    }
    return 0;
}

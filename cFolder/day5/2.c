#include <stdio.h>

int main() {
    float num1, num2, multiply;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    multiply = num1 * num2;

    printf("multiply : %.2f\n", multiply);

    return 0;
}

#include <stdio.h>

int main() {
    int num1;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    num1++;

    printf("Enter number ++ : %d\n ",num1);

    num1--;
    num1--;

    printf("Enter number -- : %d\n ",num1);    

    return 0;
}

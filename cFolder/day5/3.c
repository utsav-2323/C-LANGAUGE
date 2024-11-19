#include <stdio.h>

int main() {
    int num1;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    num1+=5;

    printf("Enter number + 5 : %d\n ",num1);

    num1-=2;

    printf("Enter number - 2 : %d\n ",num1);    

    return 0;
}

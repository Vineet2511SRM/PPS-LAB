#include <stdio.h>

int main()
{
    int num1;
    printf("Enter first number: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter second number: ");
    scanf("%d", &num2);
    int num3;
    printf("Enter second number: ");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3){
        printf("%d is greatest...",num1);
    }
    if(num2>num3 && num2>num1){
        printf("%d is greatest...",num2);
    }
    else{
        printf("%d is greatest...",num3);
    }
    return 0;
}

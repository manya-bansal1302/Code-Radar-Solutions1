#include <stdio.h>
int main() {
    float number;
    printf("Enter a number");
    scanf("%f",&number);
    printf("You entered: %.00f",number);
    return 0;
}
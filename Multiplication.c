#include <stdio.h>

int main() {
    int a, b, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    product = a * b;

    printf("Product = %d\n", product);

    return 0;
}

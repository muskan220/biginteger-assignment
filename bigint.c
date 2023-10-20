#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef bigint.h
int main() {
    char a[500], b[500]; 
    printf("Enter first no: ");
    scanf("%s", a);
    printf("Enter second no: ");
    scanf("%s", b);

    char* difference = subtractBigIntegers(a, b);
    printf("Difference: %s\n", difference);

    free(difference);


    char n1[1000], n2[1000];
    printf("Enter the 1st large int: ");
    scanf("%s", n1);
    printf("Enter the 2nd large int: ");
    scanf("%s", n2);
    char* product = multiplyBigIntegers(n1, n2);
    printf("Product: %s\n", product);
    free(product);


    char dividend[1000]; 
    int divisor;

    printf("Enter dividend: ");
    scanf("%s", dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    divideBigIntegers(dividend, divisor);
    return 0;
}
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* subtractBigIntegers(char* a, char* b) {
    int l1 = strlen(a);
    int l2 = strlen(b);
    int maxLen = (l1 > l2) ? l1 : l2;
    char* res = (char*)malloc((maxLen + 1) * sizeof(char)); 
    res[maxLen] = '\0';

    int carry = 0;
    int i, j, k;

    for (i = l1 - 1, j = l2 - 1, k = maxLen - 1; i >= 0 || j >= 0; i--, j--, k--) {
        int digit1 = (i >= 0) ? a[i] - '0' : 0;
        int digit2 = (j >= 0) ? b[j] - '0' : 0;
        int diff = digit1 - digit2 - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        res[k] = diff + '0';
    }
    int stIndex = 0;
    while (res[stIndex] == '0' && res[stIndex + 1] != '\0') {
        stIndex++;
    }
    if (stIndex > 0) {
        for (int i = 0; i <= maxLen - stIndex; i++) {
            res[i] = res[i + stIndex];
        }
    }
    return res;
}
int main() {
    char a[500], b[500]; 
    printf("Enter first no: ");
    scanf("%s", a);
    printf("Enter second no: ");
    scanf("%s", b);
    char* difference = subtractBigIntegers(a, b);
    printf("Difference: %s\n", difference);
    free(difference);
    return 0;
}


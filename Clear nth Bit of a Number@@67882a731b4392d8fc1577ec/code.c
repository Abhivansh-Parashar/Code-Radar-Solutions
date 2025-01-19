#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    num &= ~(a<<b);
    printf("%d", num);
    return 0;
}
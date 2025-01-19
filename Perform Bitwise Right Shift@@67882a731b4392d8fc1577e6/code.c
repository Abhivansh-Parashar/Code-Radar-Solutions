#include <stdio.h>

int main() {
    int a, b;
    scaf("%d %d", &a, &b);
    printf("%d", a>>b);
    return 0;
}
#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int a, b;
    //abc
    printf("input a: "); scanf("%d", &a);
    printf("input b: "); scanf("%d", &b);
    printf("sum of a and b is: %d", sum(a, b));
    return 0;
}
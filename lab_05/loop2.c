#include <stdio.h>

int main() {
    int n, Sum = 0;

    printf("enter a range from 0 to n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        Sum = Sum + i;
    }

    printf("print sum of natural numbers %d", Sum);

    return 0;
}

#include <stdio.h>

int main() {
    int a, c;
    
    scanf("%d", &a);

    while (a > 0) {
        c = a % 10;
        printf("%d", c);
        a /= 10;
    }

    return 0;
}

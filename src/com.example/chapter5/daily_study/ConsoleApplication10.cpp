#include <iostream>

int main() {
    int i;
    float sum = 0f;

    for (i = 1; i <= 100; ++i) {
        printf("%d\n", i);
        sum = sum + 1 / i;
    }

    printf("%f", sum);

    return 0;
}


#include <stdio.h>

int main() {
    float a = 10;
    float b = 5;

    if (b = 0) {  // we wrote = instead of ==
        printf("Division by zero is not possible");
    } else {
        printf("The output is: %f", a/b);
    }
    return 0;
}

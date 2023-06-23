#include <stdio.h>
#include "positive_or_negative.h"

int main() {
    int num = 5;
    if (positive_or_negative(num) == 1) {
        printf("%d is positive\n", num);
    } else {
        printf("%d is negative\n", num);
    }
    return 0;
}

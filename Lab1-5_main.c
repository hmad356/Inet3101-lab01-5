#include <stdio.h>
#include "mathheader.h"

int main() {
    printf("Math Operations Using a Header File\n");

    int num1 = 8, num2 = 3;
    int sum = addTwoInts(num1, num2);
    int difference = subtractTwoInts(num1, num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    printf("Difference of %d and %d is: %d\n", num1, num2, difference);

    return 0;
}
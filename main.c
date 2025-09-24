#include "isEven.h"

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (isEven(num)) {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }

    return 0;
}

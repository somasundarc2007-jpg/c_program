#include <stdio.h>

int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("The number is negative: %d\n", n);
    }

    return 0;
}

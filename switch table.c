#include <stdio.h>

int main() {
    int period;

    printf("Select a period:\n");
    printf("1. 1st Period\n");
    printf("2. 2nd Period\n");
    printf("3. 3rd Period\n");
    printf("4. 4th Period\n");
    printf("Enter your choice: ");
    
    scanf("%d", &period);

    switch(period) {
        case 1:
            printf(" 7:15 AM - 8:15 AM : CPL\n");
            break;

        case 2:
            printf(" 8:15 AM - 9:15 AM : CPL\n");
            break;

        case 3:
            printf(" 10:00 AM - 11:00 AM : CMAT\n");
            break;

        case 4:
            printf(" 11:00 AM - 12:00 PM : CO\n");
            break;

        default:
            printf(" Invalid period number. Please enter 1–4.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    float M1, M2, M3, total, average; // ✅ declare first
    char G;

    printf("Enter the marks: ");
    scanf("%f%f%f", &M1, &M2, &M3);

    total = M1 + M2 + M3;
    average = total / 3.0;

    if (average >= 90)
        G = 'A';
    else if (average >= 80)
        G = 'B';
    else if (average >= 70)
        G = 'C';
    else if (average >= 60)
        G = 'D';
    else
        G = 'F';

    printf("Grade: %c\n", G);
    return 0;
}



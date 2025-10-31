#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);     
    if (num % 2 == 0)
        printf("entered number is even=%d", num);
    else
        printf("entered number is odd=%d", num);
    return 0;

}
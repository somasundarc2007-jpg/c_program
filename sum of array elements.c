#include <stdio.h>
void inputArray(int *arr, int n);
void displayArray(const int *arr, int n);
int sumArray(const int *arr, int n);
int countPositives(const int *arr, int n);
int countNegatives(const int *arr, int n);

int main(void) {
    int arr[100];
    int n, sum, posCount, negCount;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    inputArray(arr, n);
    printf("The elements in the array are: ");
    displayArray(arr, n);
    sum = sumArray(arr, n);
    printf("\nThe sum of the elements in the array is: %d", sum);
    posCount = countPositives(arr, n);
    negCount = countNegatives(arr, n);
    printf("\nThe count of positive elements in the array is: %d", posCount);
    printf("\nThe count of negative elements in the array is: %d", negCount);
    return 0;
}
void inputArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}
void displayArray(const int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int sumArray(const int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int countPositives(const int *arr, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) cnt++;
    }
    return cnt;
}
int countNegatives(const int *arr, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) cnt++;
    }
    return cnt;
} 


#include <stdio.h>
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int sumArray(int arr[], int n);
int countPositive(int arr[], int n);
int countNegative(int arr[], int n);

int main(){
    int arr[100],n;
    int n,sum, posCount, negCount;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    inputArray(arr,n);
    displayArray(arr,n);
    sum = sumArray(arr,n);
    printf("Sum of array elements: %d\n", sum);
    posCount = countPositive(arr,n);
    printf("Number of positive elements: %d\n", posCount);
    negCount = countNegative(arr,n);
    printf("Number of negative elements: %d\n", negCount);
    return 0;

}    

#include <stdio.h>
#include <stdlib.h>

int main(){
int arr[]={10,20,30,40,50,60,70};
int n=7;
int key, low=0, high=n-1, mid;
int found=0;

printf("enter element to search:");
scanf("%d", &key);
while(low<=high){
    mid=(low + high)/2;
    if(arr[mid]== key){
        printf("element %d found at position %d\n",key, mid+1);
        found=1;
        break;
    }
    else if(key<arr[mid])
        high= mid-1;
        else
            low=mid+1;
    }
    if(found)
        printf("element not found\n");
    return 0;
}
int main(){
    int arr[] = {25, 12, 22, 64, 11};
    int i, j, temp;
    for(i = 0; i < 5 - 1; i++){
        for(j = 0; j < 5 - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

printf("Sorted array: ");
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


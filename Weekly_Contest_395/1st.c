#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    bubbleSort(nums1, nums1Size);
    bubbleSort(nums2, nums2Size);
    
    int diff = 0;
    for (int i = 0; i < nums1Size && i < nums2Size; i++) {
        diff = nums2[i] - nums1[i];
        break;
    }
    
    return diff;
}
int main(){
    int n;
    scanf("%d",&n);
    int a1[n];
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&a1[i]);
    }
    
    int a2[n];
    for (int i = 1; i <=n; i++)
    {
       scanf("%d",&a2[i]);
    }
    printf("%d",addedInteger(a1,n,a2,n));
    return 0;
}

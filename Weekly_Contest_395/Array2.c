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

int minimumAddedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    bubbleSort(nums1, nums1Size);
    bubbleSort(nums2, nums2Size);
    int minimum_distance = abs(nums1[1] - nums2[1]); 
    int diff = 0;
    for (int i = 1; i <= nums1Size; i++) {
        for (int j = 1; j <=nums2Size; j++) {
            diff = abs(nums1[i] - nums2[j]);
            if ((diff < minimum_distance)&&nums1[i]<nums2[j]) {
                minimum_distance = - diff;
            }
            else if ((diff < minimum_distance)&&nums1[i]>=nums2[j])
            {
                minimum_distance = diff;
            }
            
        }
    }
    return minimum_distance;
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int a1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    int a2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    printf("%d", minimumAddedInteger(a1, n1, a2, n2));
    return 0;
}

#include <stdio.h>

int longestMonotonicSubarray(int* nums, int numsSize) {
    if (numsSize <= 1)
        return numsSize;

    int increasingLen = 1; // Initialize the length of the current strictly increasing sequence
    int decreasingLen = 1; // Initialize the length of the current strictly decreasing sequence
    int maxLen = 1; // Initialize the maximum length found so far

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            increasingLen++; // Increment the length if the current element is greater than the previous one
            // Reset the decreasing length
            decreasingLen = 1;
        } else if (nums[i] < nums[i - 1]) {
            decreasingLen++; // Increment the length if the current element is smaller than the previous one
            // Reset the increasing length
            increasingLen = 1;
        } else {
            // If the current element is equal to the previous one, reset both lengths
            increasingLen = 1;
            decreasingLen = 1;
        }

        // Update maximum length
        if (increasingLen > maxLen) {
            maxLen = increasingLen;
        }
        if (decreasingLen > maxLen) {
            maxLen = decreasingLen;
        }
    }

    return maxLen;
}

int main() {
    int nums1[] = {1, 4, 3, 3, 2};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", longestMonotonicSubarray(nums1, numsSize1)); // Output: 2

    int nums2[] = {3, 3, 3, 3};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", longestMonotonicSubarray(nums2, numsSize2)); // Output: 1

    int nums3[] = {3, 2, 1};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", longestMonotonicSubarray(nums3, numsSize3)); // Output: 3

    return 0;
}


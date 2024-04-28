
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

long long minOperationsToMakeMedianK(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), compare);
    int median;
    if (numsSize % 2 == 1) {
        median = nums[numsSize / 2];
    } else {
        median = (nums[numsSize / 2 - 1] + nums[numsSize / 2]) / 2;
    }
    
    if (median == k) {
        return 0;
    } else if (median < k) {
        long long operations = 0;
        for (int i = numsSize / 2; i < numsSize; i++) {
            if (nums[i] < k) {
                operations += k - nums[i];
            } else {
                break;
            }
        }
        return operations;
    } else {
        long long operations = 0;
        for (int i = numsSize / 2; i >= 0; i--) {
            if (nums[i] > k) {
                operations += nums[i] - k;
            } else {
                break;
            }
        }
        return operations;
    }
}




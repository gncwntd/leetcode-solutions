int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}

int maximumProduct(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);

    int product1 = nums[0] * nums[1] * nums[numsSize - 1];

    int product2 = nums[numsSize - 1] * nums[numsSize - 2] * nums[numsSize - 3];

    return product1 > product2 ? product1 : product2;
}

/*
628. Maximum Product of Three Numbers
Runtime
24
ms
Beats
7.84%
Memory
11.19
MB
Beats
8.08%
*/
int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int absDifference(int* nums, int numsSize, int k) {
    
    qsort(nums,numsSize,sizeof(int),compare);

    int max = 0;
    int min = 0;

    for(int i = 0, j = numsSize-1; i < k; i++,j--){
        max += nums[j];
        min+= nums[i];
    }

    return abs(max - min);
}

/*
3774. Absolute Difference Between Maximum and Minimum K Elements


Runtime
0
ms
Beats
100.00%
Memory
10.00
MB
Beats
83.33%

*/
int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}


int thirdMax(int* nums, int numsSize) {
    
    qsort(nums,numsSize,sizeof(int),compare);
    int count = 0;
    for(int i = numsSize - 1; i >= 0; i--){
        if(i == 0 || nums[i] != nums[i-1]) count++;
        if(count == 3) return nums[i];
    }
    return nums[numsSize - 1];
}

/*
414. Third Maximum Number

solved using qsort to keep track third distinct max value.

Runtime
0
ms
Beats
100.00%
Memory
9.09
MB
Beats
81.85%

*/
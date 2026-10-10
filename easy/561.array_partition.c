int compare(const void *a,const void*b){
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x>y) - (x<y);
}


int arrayPairSum(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);

    int total = 0;

    for(int i = 0; i < numsSize; i+=2){
        total += nums[i];
    }

    return total;

}
/*
561. Array Partition
Runtime
24
ms
Beats
33.76%
Memory
11.60
MB
Beats
31.42%


*/
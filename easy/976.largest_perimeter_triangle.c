//   |a-b| < c < a+b

int compare(const void*a,const void*b){
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x>y)-(x<y);
}
int largestPerimeter(int* nums, int numsSize) {
    
    qsort(nums,numsSize,sizeof(int),compare);
    
    for(int i = numsSize-1; i >=2; i--){
        if(nums[i-2]+nums[i-1]>nums[i]) return nums[i-2]+nums[i-1]+nums[i];
    }

    return 0;
}
/*
976. Largest Perimeter Triangle
Runtime
11
ms
Beats
89.31%
Memory
10.73
MB
Beats
15.09%
*/
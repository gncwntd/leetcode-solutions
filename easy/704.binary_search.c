int search(int* nums, int numsSize, int target) {
    
    int left = 0;
    int right = numsSize - 1;

    while(left <= right){
        int mid = left + (right - left)/2;

        if(nums[mid] == target) return mid;

        else if(nums[mid] < target) left = mid + 1;

        else right = mid - 1;
        
        
    }
    return -1;

}

/*
704. Binary Search

solved using binary search with logn complexity

Runtime
0
ms
Beats
100.00%
Memory
9.96
MB
Beats
81.33%

*/
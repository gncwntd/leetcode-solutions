int searchInsert(int* nums, int numsSize, int target) {
    
    int left = 0;
    int right = numsSize - 1;

    while(left <= right){
        
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            return mid;
        } 

        if(nums[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }

    }


    return left;

}


/*
Runtime
0
ms
Beats
100.00%
Memory
9.07
MB
Beats
34.81%*/
void rotate(int* nums, int numsSize, int k) {
    
    k %= numsSize;

    for(int i = 0, j = numsSize - 1; i < j; i++, j--){
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }

    for(int i = 0, j = k - 1; i < j; i++, j--){
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }

    for(int i = k, j = numsSize - 1; i < j; i++, j--){
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }

}
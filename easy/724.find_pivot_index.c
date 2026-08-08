

int pivotIndex(int* nums, int numsSize) {

    int total = 0;
    int left = 0;
    int right = 0;

    for(int i = 0; i < numsSize; i++){
        total += nums[i];
    }

    for(int i = 0; i < numsSize; i++){
       
       right = total - left - nums[i];
       
       if(left == right) return i;

        left += nums[i];

    }

    return -1;  
}
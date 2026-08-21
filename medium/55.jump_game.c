// 2 -> 1 + 1             3 -> 1+1+1 || 1+2

bool canJump(int* nums, int numsSize) {
    
    int maxrange = 0;

    for(int i = 0; i < numsSize;i++){
        if(i > maxrange) return false;
        if(i + nums[i] > maxrange) maxrange = i + nums[i];
        if(maxrange >= numsSize - 1) return true;
    }
    return true;
}
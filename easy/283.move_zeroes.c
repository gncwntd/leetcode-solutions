/*

0 1 0 3 12
1 0 0 3 12
1 3 0 0 12
1 3 12 0 0

0 1 0 3 12
1 1 0 3 12
1 3 0 3 12
1 3 12 3 12
1 3 12 0 0




*/


void moveZeroes(int* nums, int numsSize) {
    
    int tp = 0;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0){
            nums[tp] = nums[i];            
            tp++;
        }
    }
    for(int i = tp; i < numsSize; i++){
        nums[i] = 0;
    }

}
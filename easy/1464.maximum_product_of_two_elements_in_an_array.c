int maxProduct(int* nums, int numsSize) {
    int max = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max){
            second = max;
            max = nums[i];
        }else if(nums[i] > second){
            second = nums[i];
        }
    }

    return (max - 1)*(second - 1);
}

/*
1464. Maximum Product of Two Elements in an Array
Runtime
0
ms
Beats
100.00%
Memory
9.20
MB
Beats
13.80%

*/
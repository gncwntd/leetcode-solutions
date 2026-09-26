

int maximizeExpressionOfThree(int* nums, int numsSize) {
    int max = INT_MIN;
    int second = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max){
            second = max;
            max = nums[i];
        }else if(nums[i] > second){
            second = nums[i];
        }

        if(nums[i] < min) min = nums[i];

    }


    return max + second - min;
}

/*
3745. Maximize Expression of Three Elements

Runtime
0
ms
Beats
100.00%
Memory
9.88
MB
Beats
96.67%

*/
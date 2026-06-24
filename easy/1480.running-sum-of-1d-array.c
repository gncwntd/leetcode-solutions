#include <stdlib.h>
#include <stdio.h>



int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = numsSize;

    int* answer = (int*)malloc(numsSize*sizeof(int));

    answer[0] = nums[0];

    for(int i = 1; i<numsSize;i++){
        answer[i] = answer[i-1] + nums[i];
    }

    return answer;
    

}

int main(){
    int nums[] = {1,2,3,4};
    int numsize = sizeof(nums) / sizeof(nums[0]);
    int returnsize = 0;

    int* result = runningSum(nums,numsize,&returnsize);

    for(int i = 0;i<numsize;i++){
        printf("%d\n",result[i]);
    }

    free(result);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numSize, int target, int* returnSize){
    
    *returnSize = 2;//dönecek sayıların array size ı olmalı

    int* answer = (int*)malloc(2*sizeof(int));

    for(int i = 0;i<numSize;i++){
        for(int j= i+1;j<numSize;j++){
            if(nums[i] + nums[j] == target){
                answer[0] = i;
                answer[1] = j;
                
                return answer;
            }
        }
    }

    *returnSize = 0;
    free(answer);
    return NULL;

}

int main(){
    int nums[] = {2,15,7,11};
    int target = 9;
    int numsize = sizeof(nums) / sizeof(nums[0]);
    int returnsize = 0;

    int* result = twoSum(nums,numsize,target,&returnsize);

    if(result != NULL){
        printf("[%d,%d]\n",result[0],result[1]);
        free(result);
    }
    return 0;
}
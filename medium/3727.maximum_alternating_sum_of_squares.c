/*
    i should try to replace odd values with small ones.
    Then, evens with big ones.
    also I should not only do values, but also their absolute values 


*/
int compare(const void*a,const void*b){
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x>y)-(x<y);
}

long long maxAlternatingSum(int* nums, int numsSize) {

    for(long long i = 0; i < numsSize; i++){
        if(nums[i] < 0) nums[i] = -nums[i];
    }

    qsort(nums,numsSize,sizeof(int),compare);

    long long result = 0;
    
    //find negatives
    for(long long i = 0; i < numsSize/2; i++){
        result -= 1LL * nums[i]*nums[i];
    }
    for(long long i = numsSize/2; i < numsSize; i++){
        result += 1LL * nums[i]*nums[i];
    }

    return result;
    
}

/*
3727. Maximum Alternating Sum of Squares

solved using qsort and replace odd and even numbers to find maximum score 

Runtime
113
ms
Beats
43.75%
Memory
26.20
MB
Beats
100.00%


*/
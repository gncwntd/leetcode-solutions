/*
subarray count = k - 1
k=4
1 2 3 4 5 6
10
15 -> 10 - nums i - nums
18



*/


double findMaxAverage(int* nums, int numsSize, int k) {
    
    double sum = 0;
    for(int i = 0; i < k; i++){
        sum += nums[i];
    }

    double max = sum;

    for(int i = k; i < numsSize; i++){
        sum = sum - nums[i - k] + nums[i];
        
        if(sum > max) max = sum; 
    }

    double avg = (double)max/k;
    return avg;
}
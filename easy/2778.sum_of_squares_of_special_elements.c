int sumOfSquares(int* nums, int numsSize) {
    int result = 0;

    

    for(int i = 1; i < numsSize+1; i++){
        if(numsSize % i == 0){
            result += nums[i-1]*nums[i-1];
        }
    }



    return result;
}

/*
2778. Sum of Squares of Special Elements 

Runtime
0
ms
Beats
100.00%
Memory
10.79
MB
Beats
39.76%
*/
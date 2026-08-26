bool increasingTriplet(int* nums, int numsSize) {
    


    int first = INT_MAX;
    int second = INT_MAX;

    for(int i = 0; i < numsSize;i++){
        if(nums[i] <= first){
            first = nums[i];
        }else if(nums[i] <= second){
            second = nums[i];
        }else{
            return true;
        }
    }
    return false;

}



/*
    int i = 0;
    while(nums[i] == '\0'){
        if(nums[i] > max) max = nums[i];
        if(max ==3) return true;





        Runtime
0
ms
Beats
100.00%
Memory
26.99
MB
Beats
42.26%
    */
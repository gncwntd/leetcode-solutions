int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}
    


double minimumAverage(int* nums, int numsSize) {
    
    double averages[numsSize/2];
    
    qsort(nums,numsSize,sizeof(int),compare);
    
    int k = 0;
    for(int i = 0, j = numsSize-1; i < j; i++,j--){
        averages[k] = (nums[i] + nums[j])/2.0;
        k++;
    }

    double min = averages[0];
    for(int i = 0; i < numsSize/2; i++){
        if(averages[i] < min) min = averages[i];
    }

    return min;



}

/*
3194. Minimum Average of Smallest and Largest Elements

Runtime
0
ms
Beats
100.00%
Memory
9.65
MB
Beats
77.05%

*/
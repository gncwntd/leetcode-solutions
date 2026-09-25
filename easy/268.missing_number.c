/*
-> null case: 

-> 

*/

int missingNumber(int* nums, int numsSize) {
    
    int table[10000] = {0};

    for(int i = 0; i < numsSize; i++){
        table[nums[i]]++;
    }

    for(int i = 0; i < 10000;i++){
        if(table[i] == 0){
            return i;
        }
    }
    return 0;
}

/*

solved using frequency map to keep track of which number is exist

268. Missing Number
Runtime
0
ms
Beats
100.00%
Memory
10.38
MB
Beats
5.13%

*/
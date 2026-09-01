int minimumDeletions(int* nums, int numsSize) {
    int min = nums[0];
    int max = nums[0];

    bool maxcount = false;
    bool mincount = false;
    int count = 0;

    int results[3] = {0};

    //detect min and max values
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max) max = nums[i];
        if(nums[i] < min) min = nums[i];
    }

    //scenario 1: from left
     for (int i = 0; i < numsSize; i++) {

        count++;

        if (nums[i] == max)
            maxcount = true;

        if (nums[i] == min)
            mincount = true;

        if (mincount && maxcount) {
            results[0] = count;
            count = 0;
            maxcount = false;
            mincount = false;
            break;
        }
    }

    //scenario 2: from right
    for (int i = numsSize - 1; i >= 0; i--) {

        count++;

        if (nums[i] == max)
            maxcount = true;

        if (nums[i] == min)
            mincount = true;

        if (mincount && maxcount) {
            results[1] = count;
            count = 0;
            maxcount = false;
            mincount = false;   
            break;
        }
    }

    //scenario 3: both
    int i = 0;
    int j = numsSize - 1;

    int minIndex = 0;
    int maxIndex = 0;

    for (int k = 0; k < numsSize; k++) {

        if (nums[k] == min)
            minIndex = k;

        if (nums[k] == max)
            maxIndex = k;
    }

    if (minIndex < maxIndex) {
        i = minIndex;
        j = maxIndex;
    }
    else {
        i = maxIndex;
        j = minIndex;
    }

    results[2] = (i + 1) + (numsSize - j);


    //return most efficient result
    int result = results[0];

    for(int i = 1; i < 3; i++){
        if(results[i] < result) result = results[i];
    }


    return result;

}

/*
Runtime
4
ms
Beats
21.74%
Memory
16.90
MB
Beats
52.17%

*/
bool uniqueOccurrences(int* arr, int arrSize) {
    
    int count1[2002] = {0};
    int count2[2002] = {0};
    
    for(int i = 0; i < arrSize; i++){
        count1[arr[i] + 1000]++;
    }

    for(int i = 0; i < 2002; i++){
        if(count1[i] > 0){
            if(count2[count1[i]]){
                return false;
            }
            count2[count1[i]] = 1;
        };
    }
    return true;

    
}

/*Runtime
0
ms
Beats
100.00%
Memory
9.69
MB
Beats
80.88%
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    for(int i = digitsSize - 1; i >= 0; i--){
        
        if(digits[i] < 9){
            digits[i]++;
            *returnSize = digitsSize;
            int* arr = (int*)malloc(digitsSize * sizeof(int));

            for(int j = 0; j < digitsSize; j++){
                arr[j] = digits[j]; 
            }
            return arr;
        }
        digits[i] = 0;
    }

    *returnSize = digitsSize + 1;
    int* arr = (int*)malloc((*returnSize) * sizeof(int));
    arr[0] = 1;
    for(int j = 1; j < *returnSize; j++){
        arr[j] = 0;
    } 

    return arr;
}

/*Runtime
0
ms
Beats
100.00%
Memory
10.18
MB
Beats
33.67%*/
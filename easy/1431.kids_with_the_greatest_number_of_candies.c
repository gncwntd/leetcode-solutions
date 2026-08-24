/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    
    int biggest = 0;
    for(int i = 0; i < candiesSize; i++){
        if(candies[i] > biggest) biggest = candies[i];
    }
    
    bool* arr = malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;
    int sum = 0;
    for(int i = 0; i < candiesSize; i++){
        arr[i] = (candies[i] + extraCandies >= biggest);
    }

    return arr;
}
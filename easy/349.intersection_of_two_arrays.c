/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    
    *returnSize = 0;
    int* result = (int*)malloc(1001 * sizeof(int));

    int map1[1001] = {0};
    int map2[1001] = {0};

    for(int i = 0; i < nums1Size;i++){
        map1[nums1[i]]++;
    }
    for(int i = 0; i < nums2Size;i++){
        map2[nums2[i]]++;
    }

    int j = 0;
    for(int i = 0; i < 1001;i++){
        if(map1[i] != 0 && map2[i] != 0){
            result[j] = i;
            (*returnSize)++;
            j++;

        }
    }
    return result;

}

/*

solved using a frequency array to keep track of unique numbers in the given arrays


349. Intersection of Two Arrays
Runtime
0
ms
Beats
100.00%
Memory
11.78
MB
Beats
6.59%
*/
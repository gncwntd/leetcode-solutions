/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    
    int count1[2001] = {0};
    int count2[2001] = {0};

    for(int i = 0; i < nums1Size; i++){
        count1[nums1[i] + 1000] = 1;
    }

    for(int i = 0; i < nums2Size; i++){
        count2[nums2[i] + 1000] = 1;
    }


    int** arr = (int**)malloc(2 * sizeof(int*));
    
    *returnColumnSizes = (int*)malloc(2 * sizeof(int));
    arr[0] = (int*)malloc(nums1Size * sizeof(int));
    arr[1] = (int*)malloc(nums2Size * sizeof(int));
    
    
    int size1 = 0;
    int size2 = 0;

    for(int i = 0; i < 2001; i++){
        if(count1[i] && !count2[i]){
            arr[0][size1++] = i - 1000;
        }

        if(count2[i] && !count1[i]){
            arr[1][size2++] = i - 1000;
        }
    }




    *returnSize = 2;

    (*returnColumnSizes)[0] = size1;
    (*returnColumnSizes)[1] = size2;

    return arr;

}



/* for(int i = 0; i < nums1Size; i++){
        if(nums1[i] == count2[nums1[i]]){
            count2[nums1[i]]--;
        }
    }

    for(int i = 0; i < nums2Size; i++){
        if(nums2[i] == count1[nums2[i]]){
            count1[nums2[i]]--;
        }
    }*/


    /*
    Runtime
0
ms
Beats
100.00%
Memory
17.94
MB
Beats
61.04%

    */
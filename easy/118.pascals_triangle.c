/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */



int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    
    int** arr = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = malloc(numRows * sizeof(int));

    *returnSize = numRows;

    for(int i = 0; i < numRows; i++){

        arr[i] = malloc((i+1)*sizeof(int));
        (*returnColumnSizes)[i] = i+1;

        arr[i][0] = 1;
        arr[i][i] = 1;

        for(int j = 1; j < i;j++){
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }   

    }
    return arr;

}

/*
118. Pascal's Triangle

Runtime
0
ms
Beats
100.00%
Memory
11.63
MB
Beats
34.88%
*/
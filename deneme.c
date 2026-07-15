#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int capacity = 100;
    int **result = (int **)malloc(sizeof(int *) * capacity);
    *returnColumnSizes = (int *)malloc(sizeof(int) * capacity);
    *returnSize = 0;

    qsort(nums, numsSize, sizeof(int), compare);
    
    for (int i = 0; i < numsSize - 2; i++) {
        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                if (*returnSize >= capacity) {
                    capacity *= 2;
                    result = (int **)realloc(result, sizeof(int *) * capacity);
                    *returnColumnSizes = (int *)realloc(
                        *returnColumnSizes,
                        sizeof(int) * capacity
                    );
                }

                result[*returnSize] = (int *)malloc(sizeof(int) * 3);
                result[*returnSize][0] = nums[i];
                result[*returnSize][1] = nums[left];
                result[*returnSize][2] = nums[right];

                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                // Skip duplicates
                while (left < right && nums[left] == nums[left + 1])
                    left++;

                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return result;
}
int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int *returnColumnSizes;

    int **result = threeSum(nums, numsSize, &returnSize, &returnColumnSizes);

    printf("Triplets found: %d\n", returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("[");
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d", result[i][j]);
            if (j < returnColumnSizes[i] - 1)
                printf(", ");
        }
        printf("]\n");

        free(result[i]);
    }

    free(result);
    free(returnColumnSizes);

    return 0;
}
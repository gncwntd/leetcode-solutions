void sortColors(int* nums, int numsSize) {
    int* array = nums;
    int size = numsSize;

    for(int i = 0; i < size -1 ; i++){
        int min_index = i;
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
   
}
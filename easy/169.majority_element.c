typedef struct {
    int key;
    int count;
    int used;
} HashTable;

int hash(int key, int size){
    return (key >= 0 ? key : -key) % size;
}

int majorityElement(int* nums, int numsSize) {
    
    int tableSize = numsSize * 2 + 1;
    HashTable* table = calloc(tableSize,sizeof(HashTable));

    for(int i = 0; i < numsSize; i++){
        int index = hash(nums[i],tableSize);

        while(table[index].used && table[index].key != nums[i]){
            index = (index + 1) % tableSize;
        }

        if(!table[index].used){
            table[index].key = nums[i];
            table[index].count = 1;
            table[index].used = 1;
        }else{
            table[index].count++;
        }

        if(table[index].count > numsSize / 2){
            int answer = table[index].key;
            free(table);
            return answer;
        }
    }
    free(table);
    return 0;
    
}

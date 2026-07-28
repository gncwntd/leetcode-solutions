typedef struct {
    int key;
    bool used;
} Table;

int hash(int key, int size) {
    return (key % size + size) % size;
}

bool containsDuplicate(int* nums, int numsSize) {

    int size = numsSize * 2 + 1;

    Table* table = calloc(size, sizeof(Table));

    for (int i = 0; i < numsSize; i++) {

        int index = hash(nums[i], size);

        while (table[index].used) {

            if (table[index].key == nums[i]) {
                free(table);
                return true;
            }

            index = (index + 1) % size;
        }

        table[index].key = nums[i];
        table[index].used = true;
    }

    free(table);
    return false;
}
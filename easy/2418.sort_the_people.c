/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

struct Map{
    char* name;
    int height;
}Map;

struct Map *createMap(char** name, int* height, int size){
    struct Map *newMap = malloc(size*sizeof(struct Map));
    for(int i = 0; i < size; i++){
        newMap[i].name = name[i];
        newMap[i].height = height[i];
    }

    return newMap;
}

int compare(const void *a, const void *b) {
    struct Map *p1 = (struct Map *)a;
    struct Map *p2 = (struct Map *)b;

    return p2->height - p1->height;
}

char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    
    *returnSize = heightsSize;
    
    struct Map *peoples = createMap(names,heights,namesSize);

    qsort(peoples,namesSize,sizeof(struct Map),compare);

    char** result = malloc(namesSize * sizeof(char*));

    for (int i = 0; i < namesSize; i++) {
        result[i] = peoples[i].name;
    }

    free(peoples);

    return result;






}

/*
2418. Sort the People

Runtime
0
ms
Beats
100.00%
Memory
15.50
MB
Beats
16.93%

*/
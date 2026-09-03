int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}
bool arrays_equal(int *arr1, int len1, int *arr2, int len2)
{
    if (len1 != len2)
        return false;

    for (int i = 0; i < len1; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}
bool closeStrings(char* word1, char* word2) {
    
    int seen1[26] = {0};
    int seen2[26] = {0};

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if(len1 != len2) return false;

    for(int i = 0; word1[i] !='\0';i++){
        seen1[word1[i] - 'a']++;
    }
    for(int i = 0; word2[i] !='\0';i++){
        seen2[word2[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if ((seen1[i] > 0) != (seen2[i] > 0)) return false;
    }

    int arr1[26];
    int arr2[26];


    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < 26; i++){
        if(seen1[i] > 0){
            arr1[count1++] = seen1[i];
        }
        if(seen2[i] > 0){
            arr2[count2++] = seen2[i];
        }
    }

   
    qsort(arr1, count1, sizeof(int), compare);
    qsort(arr2, count2, sizeof(int), compare);

    bool result = arrays_equal(arr1, count1, arr2, count2);

    return result;



}


/*
Runtime
6
ms
Beats
73.10%
Memory
12.86
MB
Beats
15.86%*/
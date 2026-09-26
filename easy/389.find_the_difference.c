char findTheDifference(char* s, char* t) {
    
    char result = 0;

    for(int i = 0; s[i] != '\0';i++){
        result ^= s[i];
    }
    for(int i = 0; t[i] != '\0';i++){
        result ^= t[i];
    }
    return result;
}


/*
389. Find the Difference

solved using xor to cancel matching characters and find the extra character

Runtime
0
ms
Beats
100.00%
Memory
8.77
MB
Beats
62.39%

*/
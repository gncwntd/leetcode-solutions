bool isSubsequence(char* s, char* t) {
    
    int i = 0;
    for(int j = 0; t[j] != '\0';j++){
        if(s[i] == t[j]) i++;
    }
    return s[i] == '\0';
}
/*
/*
Runtime
0
ms
Beats
100.00%
Memory
8.77
MB
Beats
4.75%*/*/
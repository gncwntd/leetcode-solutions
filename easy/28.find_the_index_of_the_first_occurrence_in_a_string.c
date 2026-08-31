int strStr(char* haystack, char* needle) {
    
    if(needle[0] == '\0') return 0;
    

    for(int i = 0; haystack[i] != '\0'; i++){
        
        int j = 0;
        
        while(haystack[i+j] == needle[j]){
            j++;
            if(needle[j] == '\0') return i;
        }

        if(haystack[i+j] == '\0') break;
    }
    return -1;

}

/*Runtime
0
ms
Beats
100.00%
Memory
9.00
MB
Beats
16.47%*/
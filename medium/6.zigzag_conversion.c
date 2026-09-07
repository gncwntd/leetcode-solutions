char* convert(char* s, int numRows) {
    
    int len = strlen(s);
    if(numRows == 1 && len >= len) return s;    

    char* arr = (char*)malloc((len + 1) * sizeof(char));

    int index = 0;

    int cycle = 2 * numRows - 2;

    for(int row = 0; row < numRows; row++){
        for(int i = row; i < len; i+= cycle){
            arr[index++] = s[i];
            int diagonal = i + cycle - 2 * row;

            if(row != 0 && row != numRows - 1 && diagonal < len) arr[index++] = s[diagonal];
        }

    }
    arr[index] = '\0';

    return arr; 


}

/*
6. Zigzag Conversion
Runtime
0
ms
Beats
100.00%
Memory
9.62
MB
Beats
27.85%


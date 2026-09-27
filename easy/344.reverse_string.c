void reverseString(char* s, int sSize) {
    
    int size = sSize / 2;
    int right = sSize - 1;

    for(int i = 0; i < size; i++){
        int temp = s[i];
        s[i] = s[right];
        s[right] = temp;
        right--;
    }

}

/*
344. Reverse String

solved using swap method to keep chars and reverse

Runtime
0
ms
Beats
100.00%
Memory
17.61
MB
Beats
91.69%

*/
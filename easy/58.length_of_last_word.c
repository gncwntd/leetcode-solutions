int lengthOfLastWord(char* s) {
    
    int length = 0;
    int i = 0;

    while(s[i] != '\0') i++;

    i--;

    while(i >= 0 && s[i] == ' ') i--;

    while(i >= 0 && s[i] != ' '){
        length++;
        i--;
    }

    return length;

}
/*Runtime
0
ms
Beats
100.00%
Memory
8.64
MB
Beats
79.74%
*/
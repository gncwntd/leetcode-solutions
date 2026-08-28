int maxVowels(char* s, int k) {
    
    int length = 0;
    for(int i = 0; s[i] != '\0'; i++){
        length++;
    }

    int count = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    if(count == k) return k;
    
    int total = count;
    for(int i = k; i < length; i++){
        if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
            s[i - k] == 'o' || s[i - k] == 'u') {
            count--;
        }

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {
            count++;
        }

        if (count > total) {
            total = count;
        }
    }
    return total;
}


/*Runtime
0
ms
Beats
100.00%
Memory
10.05
MB
Beats
52.54%
*/
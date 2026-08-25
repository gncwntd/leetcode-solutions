void reverse(char *s, int left, int right){
    
    while(left < right){
        int temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

char* reverseWords(char* s) {

    int read = 0;
    int write = 0;

    while(s[read] == ' '){
        read++;
    }    

    while(s[read] != '\0'){
        
        while(s[read] != ' ' && s[read] != '\0'){
            s[write++] = s[read++];
        }
        
        while(s[read] == ' '){
            read++;
        }

        if(s[read] != '\0'){
            s[write++] = ' ';
        }
    }

    s[write] = '\0';

    reverse(s,0,write-1);

    int start = 0;

    for(int i = 0; i <= write; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            reverse(s,start,i-1);
            start = i+1;
        }
    }

    return s;




    

}
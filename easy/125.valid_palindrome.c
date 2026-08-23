bool isPalindrome(char* s) {
    
    int length = 0;
    for(int i = 0; s[i] != '\0';i++){
        length++;
    }

    if(length == 0) return true;

    for(int i = 0, j = length -1; i <= j;i++,j--){
        while(i < j && !isalnum(s[i])){
            i++;
        }

        while(i < j && !isalnum(s[j])){
            j--;
        }

        if(tolower(s[i]) != tolower(s[j])) {
            return false;
        }
    }
    return true;
}
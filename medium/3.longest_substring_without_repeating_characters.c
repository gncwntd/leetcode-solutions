int lengthOfLongestSubstring(char* s) {
    
    int lastseen[128];

    for (int i = 0; i < 128; i++)
        lastseen[i] = -1;

    int left = 0;
    int maxlen = 0;
    
    for(int right = 0; s[right] != '\0'; right++){
        
        if(lastseen[(unsigned char)s[right]] >= left){
            left = lastseen[(unsigned char)s[right]] + 1;
        }

        lastseen[(unsigned char)s[right]] = right;

        int len = right - left + 1;
        if(len > maxlen) maxlen = len;      
    }
    return maxlen;
        
    
    
}
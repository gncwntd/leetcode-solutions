/*
sort arrays elements alphabeticaly

flew
flight
flow
flower

*/
char* longestCommonPrefix(char** strs, int strsSize) {
    
    if (strsSize == 0)
        return "";

    for(int i = 0; i < strsSize - 1; i++){
        for(int j = 0; j < strsSize - i - 1; j++){
            if(strcmp(strs[j], strs[j + 1]) > 0){
                char* temp = strs[j];
                strs[j] = strs[j+1];
                strs[j+1] = temp;
            }
        }
    }

    int i = 0;
    while(strs[0][i] == strs[strsSize - 1][i] && strs[0][i] != '\0') i++;

    char* answer = (char*)malloc(i+1);

    for(int j = 0; j < i; j++){
        answer[j] = strs[0][j];
    }
    
    if(answer == NULL) return NULL;

    answer[i] = '\0';

    return answer;


}
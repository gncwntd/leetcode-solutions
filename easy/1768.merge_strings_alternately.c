/*

a <- p1
b
c
\0

*/

char * mergeAlternately(char * word1, char * word2){
    
    char p1 = strlen(word1);
    char p2 = strlen(word2);
    
    char* string = (char*)malloc((p1+p2+1)*sizeof(char));

    int k = 0; 

    for(int i = 0; i < p1 && i < p2; i++){
        string[k++] = word1[i];
        string[k++] = word2[i];
    }

    for(int i = p1; i < p2; i++){
        string[k++] = word2[i];
    }
    
    for(int i = p2; i < p1; i++){
        string[k++] = word1[i];
    }

    string[k] = '\0';

    return string;

}
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char** fizzbuzz(int n , int* returnSize){
    *returnSize = n;

    char** answer = (char**)malloc(n * sizeof(char*));

    for(int i = 1;i <=n;i++){
        
        answer[i-1] = (char*)malloc(9 * sizeof(char));

        if(i % 15 == 0) sprintf(answer[i-1],"fizzbuzz");
        else if(i % 3 == 0) sprintf(answer[i-1],"fizz");
        else if(i % 5 == 0) sprintf(answer[i-1],"buzz");
        else sprintf(answer[i-1],"%d",i);

    }
    return answer;
}

int main(){
    int n = 15;
    int size = 0;

    char** result = fizzbuzz(n,&size);

    printf("result : \n");
    
    for(int i = 0; i < size ; i++){
        printf("%s \n",result[i]);
    }

    for(int i = 0; i < size; i++){
        free(result[i]);
    }

    free(result);
    
    return 0;
}
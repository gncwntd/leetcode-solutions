#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//solution with bubble sort implementation 
//it is obviously wrong approach if performance is the goal :)

int main(){
    int array0[] = {1,1,4,2,1,3};
    int array[] = {1,1,4,2,1,3};

    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size - 1; i++){
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
    for(int i = 0; i < size; i++){
            printf("%d ",array[i]);
    }
        
    printf("\n");

    int mismatches = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] != array0[i]) {
            mismatches++;
        }
    }
    printf("%d\n", mismatches);



}
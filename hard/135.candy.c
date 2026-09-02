int candy(int* ratings, int ratingsSize) {
    
    int answer = 0;
    int* candies = (int*)malloc(ratingsSize * sizeof(int));
    for(int i = 0; i < ratingsSize; i++){
        candies[i] = 1;
    }
    
    for(int i = 1; i < ratingsSize; i++){
        if(ratings[i] > ratings[i-1]){
            candies[i] = candies[i-1] + 1;
        }
    }
    // 1 2 3 2 1
   
    // 1 2 3 1 1
    // 1 2 3 2 1  
    for(int i = ratingsSize - 2; i >= 0; i--){
        if(ratings[i] > ratings[i + 1]){
            if(candies[i] < candies[i+1] + 1){
                candies[i] = candies[i + 1] + 1;
            }
        }
    }
    for(int i = 0; i < ratingsSize; i++){
        answer += candies[i];
    }   
    free(candies);
    return answer;
}
/*Runtime
0
ms
Beats
100.00%
Memory
16.04
MB
Beats
7.87%*/
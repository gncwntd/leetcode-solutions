int maxArea(int* height, int heightSize) {
    
    int amount = 0;
    int max = 0;

    int i = 0;
    int j = heightSize - 1;

    while(i < j){
        
        if(height[i] < height[j]){
            amount = height[i] * (j-i); 
            i++;
        }else{
            amount = height[j] * (j-i); 
            j--;          
        }


        if(amount > max) max = amount;
        
    }

    return max;
   
    


}

/*

 for(int i = 0, j = heightSize - 1; i < j; i++){
        
    }


    Runtime
0
ms
Beats
100.00%
Memory
14.69
MB
Beats
84.59%


*/
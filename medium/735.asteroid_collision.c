/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {

    int* stack = (int*)malloc(asteroidsSize * sizeof(int));
    int top = -1;

    for(int i = 0; i < asteroidsSize; i++){
        int current = asteroids[i];
        bool destroyed = false;

        while(top >= 0 && stack[top] > 0 && current < 0){
            
            if(stack[top] < -current){
                top--;
                continue;

            }else if(stack[top] == -current){
                top--;
                destroyed = true;
                break;
            }else{
                destroyed = true;
                break;

            }

        }

        if(!destroyed){
            stack[++top] = current;
        }

    }

    *returnSize = top + 1;

    return stack;


}

/*Runtime
0
ms
Beats
100.00%
Memory
11.04
MB
Beats
52.42%
*/